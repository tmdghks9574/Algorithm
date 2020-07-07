#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long
int dp[1002];
int arr[1002];
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y; cin >> n >> x >> y;
    x++; y++;
    int pos = 0;
    while(n != 0)
    {
        if(x > pow(2,n-1) && y > pow(2,n-1))
        {
            pos += pow(2,2*n) / 4 * 3;
            x -= pow(2,n-1);
            y -= pow(2,n-1);
            n--;
        }
        else if(x > pow(2,n-1) && y <= pow(2,n-1))
        {
            pos += pow(2,2*n) / 4 * 2;
            x -= pow(2,n-1);
            n--;
        }
        else if(x <= pow(2,n-1) && y > pow(2,n-1))
        {
            pos += pow(2,2*n) / 4 * 1;
            y -= pow(2,n-1);
            n--;
        }
        else
            n--;
    }
    cout << pos << endl;

}