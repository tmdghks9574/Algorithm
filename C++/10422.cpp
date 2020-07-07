#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll arr[5001];
int main()
{
    int n; cin >> n;
    ll mod = 1000000007;
    arr[0] = 1; arr[1] = 1; arr[2] = 2;
    for(int i = 3; i <= 5000; i++)
    {
        ll sum = 0;
        for(int j = 0; j < i; j++)
        {
            sum += ((arr[j] % mod) * (arr[i-j-1] % mod)) % mod;
        }
        arr[i] = sum % 1000000007;
    }
    while(n--)
    {
        int a; cin >> a;
        if(a % 2 == 1)
            cout << "0\n";
        else
            cout << arr[a/2] << endl;
    }
}
