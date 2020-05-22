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
    int a,b; cin >> a >> b;
    deque<int> d;
    for(int i = 1; i <= a; i++)
        d.push_back(i);
    int cnt = 0;
    while(b--)
    {
        int c; cin >> c;
        int left = 0, right = d.size()-1;
        int i = 0;
        for(i = 0; i < d.size(); i++)
        {
            if(d[i] == c)
            {
                if(i <= d.size()-i)
                {
                    cnt += i;
                    for(int j = 0; j < i; j++)
                    {
                        d.push_back(d.front());
                        d.pop_front();
                    }
                    d.pop_front();
                }
                else
                {
                    cnt += d.size()-i;
                    for(int j = 0; j < d.size()-i; j++)
                    {
                        d.push_front(d.back());
                        d.pop_back();
                    }
                    d.pop_front();
                }
            }
        }
    }
    cout << cnt << endl;
}