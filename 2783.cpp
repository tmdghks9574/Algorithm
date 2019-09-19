#include<iostream>
#include<algorithm>
using namespace std;
double arr[102];
int main()
{
    double c = 1000.00;
    double x,y; cin >> x >>y;
    int n;
    cin >> n;
    arr[0] = c / y * x;
    for(int i = 1; i <= n; i++)
    {
        double a,b; cin >> a >> b;
        arr[i] = c / b * a;
    }
    n++;
    sort(arr,arr+n);
    cout << fixed;
    cout.precision(2);
    cout << arr[0] << endl;
}


