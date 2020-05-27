#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,cnt = 0; cin >> a >> b >> c;
    while(b != c)
    {
        b = b/2 + b%2;
        c = c/2 + c%2;
        cnt++;
    }
    cout << cnt << endl;
}