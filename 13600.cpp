#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int fact(int a)
{
    if(a == 0)
        return 1;
    if(a == 1)
        return 1;
    return a*fact(a-1);
}
int main()
{
    int a; cin >> a;
    int cnt = 0;
    while(a != 0)
    {
        for(int i = 8; i >= 1; i--)
        {
            if(fact(i) <= a)
            {
                cnt++;
                a -= fact(i);
                break;
            }
        }
    }
    cout << cnt << endl;
}