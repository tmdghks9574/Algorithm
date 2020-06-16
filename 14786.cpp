#include<bits/stdc++.h>

using namespace std;
#define ld long double
#define dif 1e-20
int main()
{
    cout << fixed;
    cout.precision(20);
    int a,b,c; cin >> a >> b >> c;
    ld left = (c - b) / (ld)a;
    ld right = (c + b) / (ld)a;
    ld mid;
    int loop = 100000;
    while(left < right && loop--)
    {
        mid = (left + right) / 2;
        if(a * mid + b * (ld)sin(mid) > c)
            right = mid;
        else if(a * mid + b * (ld)sin(mid) < c)
            left = mid + dif;
    }
    cout << mid << endl;
}