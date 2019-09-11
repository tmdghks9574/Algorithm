#include<iostream>
#include<algorithm>
using namespace std;
int a[5];
int main()
{
    int sum = 0;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sum = (a[0]+a[1]+a[2]+a[3]+a[4])/5;
    sort(a,a+5);
    cout << sum << endl << a[2] << endl;
}
