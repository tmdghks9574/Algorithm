#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double a,b; cin >> a >> b;
    double c,d;
    c = min(a,b);
    d = max(a,b);
    double sum1,sum2;
    if(c >= 0)
    {
        sum1 = c * (c + 1) / 2;
        sum2 = d * (d + 1) / 2;
        cout << sum2 - sum1 + c<< endl;
    }
    else if(c < 0 && d > 0)
    {
        sum1 = abs(c) * (abs(c) + 1) / 2;
        sum2 = d * (d + 1) / 2;
        cout << sum2 - sum1 << endl;
    }
    else
    {
        sum1 = abs(c) * (abs(c) + 1) / 2;
        sum2 = abs(d) * (abs(d) + 1) / 2;
        cout << (sum1 - sum2) * -1 + d<< endl;
    }
}
        
        
