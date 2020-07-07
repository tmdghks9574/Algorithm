#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;
int arr[501][501];
int dp[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
            cin >> arr[i][j];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(j == 1)
                dp[i][j] = dp[i-1][j] + arr[i][j];
            else if(j == i)
                dp[i][j] = dp[i-1][j-1] + arr[i][j];
            else
            {
                dp[i][j] = max(dp[i-1][j-1]+arr[i][j] , dp[i-1][j]+arr[i][j]);
            }
        }
    }
    sort(dp[n],dp[n]+501,greater<int>());
    cout << dp[n][0] << endl;

}