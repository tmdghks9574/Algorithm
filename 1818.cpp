#include<iostream>
#include<vector>
#include<map>
#include<cstdio>
#include<numeric>
#include<algorithm>
#include<cmath>
#include<stack>
#include<deque>
#include<queue>
#include<bitset>
#include<set>


using namespace std;
#define endl "\n"
#define ll long long
int main ()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    vector<int> v;
    v.push_back(-(2e9));
    int ans = 0;
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        if(a > v.back())
        {
            v.push_back(a);
            ans++;
        }
        else
        {
            auto iter = lower_bound(v.begin(),v.end(),a);
            *iter = a;
        }
    }
    cout << n-ans << endl;
}