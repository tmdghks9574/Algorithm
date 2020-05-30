#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define INF 1e9
#define endl "\n"

using namespace std;

int main()
{
    int N,M,X; cin >> N >> M >> X;
    vector<pair<int,int>> v[N+1];
    for(int i = 0; i < M; i++)
    {
        int from,to,val;
        cin >> from >> to >> val;
        v[from].push_back({to,val});
    }
    int dist[N+1][N+1];
    for(int i = 0; i < N+1; i++)
    {
        for(int j = 0; j < N+1; j++)
            dist[i][j] = INF;
    }
    vector<int> v2;
    vector<int> v3;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    for(int i = 1; i <= N; i++)
    {
        int start = i;
        pq.push({0,start});
        dist[i][start] = 0;
        while(!pq.empty())
        {
            int cost = pq.top().first;
            int here = pq.top().second;
            pq.pop();
            for(int j = 0; j < v[here].size(); j++)
            {
                int next = v[here][j].first;
                int nextcost = v[here][j].second;
                if(dist[i][next] > nextcost + dist[i][here])
                {
                    dist[i][next] = nextcost + dist[i][here];
                    pq.push({dist[i][next],next});
                }
            }
        }
        if(i == X)
        {
            for(int k = 1; k <= N; k++)
                v3.push_back(dist[i][k]);
        }
        v2.push_back(dist[i][X]);
    }
    for(int i = 0; i < N; i++)
        v2[i] += v3[i];
    sort(v2.begin(),v2.end(),greater<int>());
    cout << v2[0] << endl;
}