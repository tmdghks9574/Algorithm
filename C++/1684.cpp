#include <bits/stdc++.h>

using namespace std;
int arr[1002];
int gcd(int x, int y)
{
    if(y == 0)
        return x;
    if(x % y == 0)
        return y;
    return gcd(y,x % y);
}
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    for(int i = 1; i< n; i++)
        arr[i-1] = arr[i]-arr[i-1];
    int r = arr[0];
    for(int i = 1; i < n-1; i++)
        r = gcd(r,arr[i]);
    cout << r << endl;
}