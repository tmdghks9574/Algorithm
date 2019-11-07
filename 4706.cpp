#include <iostream>
#include<string>
#include<cmath>

using namespace std;
double c = 299792458;
int main()
{
    while(1)
    {
        double a,b; cin >> a >> b;
        if(a == 0 && b == 0)
            return 0;
        else
        {
            double val = b/a;
            val *= val;
            cout<<fixed;
            cout.precision(3);
            cout << sqrt((1- val) * c * c) / c<< endl;
        }
    }
}