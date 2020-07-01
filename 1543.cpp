#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int cnt = 0;
    ll k = 0;
    while(1)
    {
        if(s1.find(s2,k) > 10000000)
            break;
        ll a = s1.find(s2,k);
        if(a < 10000000)
        {
            cnt++;
            k = a + s2.size();
        }
    }
    cout << cnt << endl;
}