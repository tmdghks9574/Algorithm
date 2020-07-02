#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    unsigned ll a,b;
    cin >> a;
    vector<pair<unsigned ll,ll>> v;
    b = 1;
    v.push_back({1,1});
    for(int i = 1; i <= 60; i++)
    {
        b *= 3;
        if(b <= INT64_MAX)
            v.push_back({b,1});
        else
            break;
    }
    v.push_back({b*3,1});
    bool check = false;
    if(a == 1)
    {
        cout << "YES\n";
        return 0;
    }
    if(a == 0)
    {
        cout << "NO\n";
        return 0;
    }
    for(int i = 0,j = 0; i < 10000; i++)
    {
        if(a == 0)
        {
            check = true;
            break;
        }
        if(a < v[j].first)
        {
            if(v[j-1].second == 1)
            {
                a -= v[j-1].first;
                v[j-1].second = 0;
                j = 0;
            }
        }
        j++;
        if(j == v.size())
            break;
    }
    if(check)
        cout << "YES\n";
    else
        cout << "NO\n";
}