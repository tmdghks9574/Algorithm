#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000009
ll arr[1000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    arr[1] = 1; arr[2] = 2; arr[3] = 4;
    for(int i = 4; i <= 1000000; i++)
        arr[i] = (arr[i-3] % m + arr[i-2] % m + arr[i-1] % m) % m;

    int T; cin >> T;
    while(T--)
    {
        int n; cin >> n;
        cout << arr[n] << endl;
    }
}