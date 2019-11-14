#include<iostream>
using namespace std;
int main()
{
    int a,b,c; cin >> a >> b >> c;
    a += b;
    int cnt = 0;
    while(1)
    {
        if(a >= c)
        {
            a -= c;
            a++;
            cnt++;
        }
        else
            break;
    }
    cout << cnt << endl;
}