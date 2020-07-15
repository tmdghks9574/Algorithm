#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long
int arr[201];
int dp[201];
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (dp[i] == 0)dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }
    sort(dp,dp+n,greater<int>());
    cout << n - dp[0] << endl;
}