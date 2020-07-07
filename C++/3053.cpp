#include<iostream>
using namespace std;

#define pi 3.14159265358979;
int main()
{
    double n; cin >> n;
    double a = pi;
    cout << fixed;
    cout.precision(6);
    cout << n * n * a << endl;
    cout << fixed;
    cout.precision(6);
    cout << n * n * 2 << endl;
}
