#include<bits/stdc++.h>
using namespace std;

deque<int> trans(deque<int> d, int a, int b)
{
    while(b != 0)
    {
        d.push_front(b % a);
        b /= a;
    }
    return d;
}
int main()
{
    int T; cin >> T;
    while(T--)
    {
       int a,b,c; cin >> a >> b >> c;
       deque<int> d1;
       deque<int> d2;
       deque<int> d3;
       d1 = trans(d1,a,b);
       d2 = trans(d2,a,c);
       for(int i = 0; i <= 50; i++)
       {
           d1.push_front(0);
           d2.push_front(0);
       }
       auto iter1 = d1.end();
       iter1--;
       auto iter2 = d2.end();
       iter2--;
       for(int i = 0; i < 50; i++)
       {
           d3.push_front((*iter1 + *iter2) % a);
           iter1--; iter2--;
       }
       int ans = 0;
       auto iter3 = d3.end();
       iter3--;
       for(int i = 0; i < 50; i++)
       {
           ans += pow(a,i) * (*iter3);
           iter3--;
       }
       cout << ans << endl;
    }
}