#include<iostream>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    int k = 0;
    if(a % b == 0)
    {
        cout << "0\n";
        return 0;
    }
    a = a % b;
    if(b % a == 0)
    {
        k = b / a - 1;
        cout << k * a << endl;
        return 0;
    }
    else
    {
        while(1)
        {
            k += a;
            b -= a;
            if(a > b)
            {
                k += (b-1);
                break;
            }
            else
                continue;
        }
    }
    cout << k << endl;
}

