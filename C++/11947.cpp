#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
       string s1,s2; cin >> s1;
       ll a = s1.size();
       ll b = pow(10,a);
       ll c = stoll(s1);
       if(c >= b/2)
       {
           cout << (ll)((b/2) * (b/2-1)) << endl;
           continue;
       }
       else
       {
           for(int i = 0; i < s1.size(); i++)
               s2 += 57 - s1[i] +'0';
           cout << stoll(s1) * stoll(s2) << endl;
       }
    }
}