#include<iostream>
#define ll long long
ll f(ll n)
{
    ll r=n;
    for(ll i=2;i<=n;i*=2)
        r+=(n/i)*(i/2);
    return r;
}
int main()
{
    ll a,b;
    std::cin>>a>>b;
    std::cout<<f(b)-f(a-1);
}