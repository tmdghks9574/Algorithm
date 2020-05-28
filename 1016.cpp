#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long

bool c[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll min,max; cin >> min >> max;

    for(ll i = 2; i * i <= max; i++)
    {
        ll j = min / (i * i);
        if(i * i * j != min)
            j++;
        for(ll k = j; i * i * k <= max; k++)
        {
            c[i * i * k - min] = true;
        }
    }
    int cnt = 0;
    for (int i = 0; i < max - min + 1; i++) {
        if (!c[i])
            cnt++;
    }
    cout << cnt << endl;

}
