#include<bits/stdc++.h>

using namespace std;

int arr[1001];
int main()
{
    int n; cin >> n;
    int max = -1;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        if(a > max)
            max = a;
        arr[a] = a;
    }
    int b; cin >> b;
    if(arr[b] != 0)
    {
        cout << "0\n";
        return 0;
    }
    int l = 0,r = max;
    for(int i = b+1; i <= max; i++)
    {
        if(arr[i] != 0)
        {
            r = i;
            break;
        }
    }
    for(int i = b-1; i >= 0; i--)
    {
        if(arr[i] != 0)
        {
            l = i;
            break;
        }
    }
    cout << (r - b) * (b - l) - 1 << endl;

}