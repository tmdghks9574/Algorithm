#include<iostream>
#include<deque>
#include<string>
#include<map>
#include<queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    while(n--)
    {
        queue<pair<int,int>> q;
        priority_queue<int> pq;
        int a,b; cin >> a >> b;
        int cnt = 0;
        for(int i = 0; i < a; i++)
        {
            int c; cin >> c;
            q.push(make_pair(i,c));
            pq.push(c);
        }
        while(!q.empty())
        {
            int d = q.front().first;
            int e = q.front().second;
            q.pop();
            if (pq.top() == e) {
                pq.pop();
                ++cnt;
                if (d == b) {
                    cout << cnt << endl;
                    break;
                }
            }
            else q.push({ d,e });
        }

    }
}