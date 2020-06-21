#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<ll,ll> m;
int main()
{
    ll n; cin >> n;
    if(n == 1)
    {
        cout << "1\n";
        return 0;
    }
    ll a = 2;
    while(a*a <= n)
    {
        if(n % a == 0)
        {
            m[a]++;
            n /= a;
            continue;
        }
        a++;
    }
    m[n]++;
    ll ans = 1;
    for(auto iter = m.begin(); iter != m.end(); iter++)
        ans *= pow(iter->first,iter->second) - pow(iter->first,iter->second-1);
    cout << ans << endl;
}
