#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a % b == 0)
        return b;
    else
        gcd(b, a % b);
}
int main()
{
    int n; cin >> n;
    while(n--)
    {
        int a,b; cin >> a >> b;
        int k = gcd(a,b);
        cout << k * (a / k) * (b / k) << " " << k << endl;
    }
}
