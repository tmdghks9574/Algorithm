#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll n,ans; cin >> n;
    ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= 1000000000000;
        while (ans % 10 == 0)
            ans /= 10;
    }
    cout << ans%10 << '\n';
}