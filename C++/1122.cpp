#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define endl "\n"

int main()
{
    ll a,b,k; cin >> a >> b >> k;
    if(a % 2 == 1 && k % 2 == 0)
    {
        cout << "-1\n";
        return 0;
    }
    if(a == 0)
    {
        if(b == 0)
        {
            cout << "0\n";
            return 0;
        }
        else
        {
            cout << "0\n";
            return 0;
        }
    }
    else
    {
        if(k == 0)
        {
            cout << "-1\n";
            return 0;
        }
    }

    ll sum1 = 0, sum2 = 0;
    ll min = a, max = 0;
    for(ll i = 1; i <= 100000; i++)
    {
        if(i % 2 == 1)
            sum1 = i * a;
        else
            sum2 = i * b;
        max = sum1 + sum2;
        ll tmp = k * i;
        if(tmp >= min && tmp <= max)
        {
            if((max - tmp) % 2 == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << "-1\n";
}