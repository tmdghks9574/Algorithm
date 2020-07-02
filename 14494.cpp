#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll dp[1001][1001];
int main()
{
    dp[1][1] = 0;
    for(int i = 2; i <= 1000; i++)
    {
        dp[1][i] = 1;
        dp[i][1] = 1;
        dp[i][i] = 1;
    }
    dp[2][2] = 3;
    for(int i = 2; i <= 1000; i++)
    {
        for(int j = 2; j <= 1000; j++)
        {
            if(i == 2 && j == 2)
                continue;
            dp[i][j] = (dp[i-1][j] % mod  + dp[i][j-1] % mod) % mod;
            dp[i][j] = (dp[i][j] % mod + dp[i-1][j-1] % mod) % mod;
        }
    }
    int n,m; cin >> n >> m;
    if(n==1 && m==1)
        cout <<"1\n";
    else
    cout << dp[n][m] << endl;
}