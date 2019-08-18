#include<iostream>
using namespace std;

int main()
{
    int a,b,c; cin >> a >> b >> c;

    int d = 0, e = 0, f = 0;
    int year = 1;
    while(1)
    {
        d++,e++,f++;
        if(d % 16 == 0)
            d = 1;
        if(e % 29 == 0)
            e = 1;
        if(f % 20 == 0)
            f = 1;
        if(d== a && e == b && f == c)
            break;
        else
            year++;
    }
    cout << year << endl;
}
