#include<iostream>
using namespace std;

int main()
{
    long long a,b,c; cin >> a >> b >> c;
    long long price = c-b;
    if(b >= c)
    {
        cout << "-1" << endl;
        return 0;
    }
    else
    {
        cout << a / price + 1 << endl;
    }
}


