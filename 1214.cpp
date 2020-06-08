#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll D, P, Q; cin >> D >> P >> Q;
    if (P < Q) swap(P, Q);
    ll ans = 1e15;
    for(int i = 0;  i < min(Q, D / P + 2); i++)
    {
        ll q = (D - P * i) / Q;
        for(int j = max(0ll,q - 2); j < q + 2; j++)
        {
            if (P*i + Q * j < D)
                continue;
            ans = min(ans, P*i + Q * j);
        }
    }
    cout << ans << endl;
}