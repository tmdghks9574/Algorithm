#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

int main()
{
    while(1)
    {
        int a,b; cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;
        else
        {
            if(gcd(a,b) == a)
                cout << "factor\n";
            else if(gcd(a,b) == b)
                cout << "multiple\n";
            else
                cout << "neither\n";
        }
    }
}
