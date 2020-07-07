#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long
int dp[3][100002];

int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        for (int i = 0; i < 2; i++) {
            for (int j = 2; j < m + 2; j++) {
                cin >> dp[i][j];
            }
        }
        for (int j = 2; j < m + 2; j++) {
            for (int i = 0; i < 2; i++) {
                if (i == 1)
                    dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j - 2]);
                else
                    dp[i][j] += max(dp[i + 1][j - 1], dp[i + 1][j - 2]);
            }
        }
        printf("%d\n", max(dp[0][m + 1], dp[1][m + 1]));
    }
}