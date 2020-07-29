#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[50][50];

int main()
{
    int n,m; cin >> n >> m;
    int r = m - n;
    n = n + r - 1;
    dp[0][0] = 1;
    dp[1][0] = 1; dp[1][1] = 1;
    for(int i = 2; i <= 50; i++)
    {
        for(int j = 0; j <= 50; j++)
        {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    cout << dp[n][r] << endl;
}