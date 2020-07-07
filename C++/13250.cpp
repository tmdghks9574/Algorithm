#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ld arr[1000001];

int main()
{
    int a; cin >> a;
    cout.precision(12);
    arr[0] = 0; arr[1] = 1;
    arr[2] = (arr[0] + arr[1]) / 6 + 1;
    arr[3] = (arr[0] + arr[1] + arr[2]) / 6 + 1;
    arr[4] = (arr[0] + arr[1] + arr[2] + arr[3]) / 6 + 1;
    arr[5] = (arr[0] + arr[1] + arr[2] + arr[3] + arr[4]) / 6 + 1;
    for(int i = 6; i <= 1000000; i++)
        arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6]) / 6 + 1;
    cout << arr[a] << endl;
}