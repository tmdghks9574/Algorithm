#include<bits/stdc++.h>
using namespace std;
int n,m;

int main()
{
    int T; cin >> T;
    while(T--)
    {
        cin >> n >> m;
        int arr1[4] = {m, 1, m^1, 0};
        int arr2[4] = {n, n^m, n-1, (n-1)^m};
        if(n % 2 == 0)
            cout << arr1[(m-n) % 4] << endl;
        else
            cout << arr2[(m-n) % 4] << endl;
    }
}