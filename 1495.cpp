#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long
ll arr[100001];
bool dp[101][1001];
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,s,m; cin >> n >> s >> m;

    dp[0][s] = true;
    for(int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= m; j++)
        {
            if(!dp[i-1][j])
                continue;

            if(j-arr[i] >= 0)
                dp[i][j-arr[i]] = true;

            if(j + arr[i] <= m)
                dp[i][j+arr[i]] = true;
        }
    }
    for(int i = m; i >= 0; i--)
    {
        if(dp[n][i] == 1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1\n";
}