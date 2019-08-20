#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0)
        return b;
    else
        return gcd(b , a % b);
}
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int mom = b * d;
    int son = a * d + b * c;
    int k = gcd(mom,son);
    cout << son / k << " " << mom / k << endl;
}
