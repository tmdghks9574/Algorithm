#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[10000001];
int main()
{
    for(int i = 2; i * i <= 10000000; i++)
    {
        if(!prime[i])
        {
            for(int j = i*i; j <= 10000000; j+=i)
            {
                prime[j] = true;
            }
        }
    }
    vector<ll> v;
    for(int i = 2; i <= 10000000; i++)
    {
        if(!prime[i])
            v.push_back(i);
    }
    ll a,b; cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < 664579; i++)
    {
        if(v[i]*v[i] > b)
            break;
        for(int j = 2; j <= 60; j++)
        {
            if(pow(v[i],j) > b)
                break;
            if(pow(v[i],j) >= a && pow(v[i],j) <= b)
                cnt++;
        }
    }
    cout << cnt << endl;
}