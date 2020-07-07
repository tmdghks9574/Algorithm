#include <iostream>
#include<algorithm>
#include<queue>
#include<vector>
#define INF 1e9
using namespace std;
int main()
{
    int N,M; cin >> N >> M;
    vector<pair<int,int>> bus[N+1];
    for(int i = 0; i < M; i++)
    {
        int from,to,val; cin >> from >> to >> val;
        bus[from].push_back({to,val});
    }
    int dist[N+1];
    fill(dist,dist+N+1,INF);
    int start,dest; cin >> start >> dest;
    dist[start] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,start});

    while(!pq.empty())
    {
        int cost = pq.top().first;
        int here = pq.top().second;
        pq.pop();

        for(int i = 0; i < bus[here].size(); i++)
        {
            int next = bus[here][i].first;
            int nextcost = bus[here][i].second;
            if(dist[next] > dist[here] + nextcost)
            {
                dist[next] = dist[here] + nextcost;
                pq.push({dist[next],next});
            }
        }
    }
    cout << dist[dest] << endl;

}