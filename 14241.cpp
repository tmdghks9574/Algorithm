#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    deque<int> v;
    int n; cin >> n;
    while(n--)
    {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    int tmp = v.size();
    int score = 0;
    int k = 0;
    for(int i = 0; i < tmp-1; i++)
    {
        score += v[0]*v[1];
        v[1] += v[0];
        v.pop_front();
    }
    cout << score << endl;
}