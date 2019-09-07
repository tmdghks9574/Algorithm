#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
    ll a,b; cin >> a >> b;
    cout << fixed;
    cout.precision(0);
    ll sum = 1;
    if(a % b == 0)
        cout << pow(a/b,b) << endl;
    else
    {
        ll c = a % b;
        for(int i = 0; i < b - c; i++)
            sum *= a/b;
        for(int i = 0; i < c; i++)
            sum *= (a/b + 1);
        cout << sum << endl;
    }
}
    

