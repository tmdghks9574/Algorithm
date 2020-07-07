#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,k; cin >> n >> k;
    int ans = 0;
    for(int i = 2; i <= n; i++)
        ans = (ans+k) % i;
    cout << ans+1 << endl;
}