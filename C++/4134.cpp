#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
bool prime[80000];
int main()
{
    for (int i = 2; i * i <= 80000; i++)
    {
        if (!prime[i])
            for (int j = i * i; j <= 80000; j += i)
                prime[j] = true;
    }
    vector<ll> v;
    for(int i = 2; i <= 80000; i++)
    {
        if(!prime[i])
            v.push_back(i);
    }

    int n; cin >> n;
    while(n--)
    {
        ll a; cin >> a;
        if(a == 0)
        {
            cout << "2\n";
            continue;
        }
        else if(a == 1)
        {
            cout << "2\n";
            continue;
        }
        else if(a == 2)
        {
            cout << "2\n";
            continue;
        }
        bool check = true;
        for(ll i = a; i < 2*a; i++)
        {
            for(int j = 0; j < v.size(); j++)
            {
                check = true;
                if(i % v[j] == 0)
                {
                    check = false;
                    break;
                }
                if(v[j]*v[j] > i)
                    break;
            }
            if(check)
            {
                cout << i << endl;
                break;
            }
        }
    }


}