#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k; cin >> a >> b >> k;
    while(k--)
    {
        if(a > 2*b)
            a--;
        else
            b--;
    }
    if(a > 2 * b)
        cout << b << endl;
    else
        cout << a/2 << endl;
}