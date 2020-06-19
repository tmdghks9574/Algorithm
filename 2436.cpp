#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
ll gcd(ll a, ll b)
{
    if(a % b == 0)
        return b;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a * b / gcd(a,b);
}
int main()
{
    ll a,b; cin >> a >> b;
    vector<ll> v;
    set<ll> s;
    if(a == b)
    {
        cout << a << " " << b << endl;
        return 0;
    }
    for(int i = 1; i <= sqrt(b); i++)
    {
        if(b % i == 0)
        {
            ll k = i;
            ll j = b/i;
            if(k % a == 0)
                s.insert(k);
            if(j % a == 0)
                s.insert(j);
        }
    }
    for(auto iter = s.begin(); iter != s.end(); iter++)
        v.push_back(*iter);
    int k = v.size();
    set<ll> s2;
    vector<pair<ll,ll>> vv;
    for(ll i = 0; i < k; i++)
    {
        for(ll j = k-1; j >= 0; j--)
        {
            if(gcd(v[i],v[j]) == a && lcm(v[i],v[j]) == b)
            {
                s2.insert(v[i]+v[j]);
                vv.push_back({v[i],v[j]});
            }

        }
    }
    for(int i = 0; i < vv.size(); i++)
    {
        if(vv[i].first + vv[i].second == *s2.begin())
        {
            cout << vv[i].first << " " << vv[i].second << endl;
            return 0;
        }
    }

}