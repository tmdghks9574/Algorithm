#include<iostream>
using namespace std;
int arr[1000001];

int main()
{
    int a,b,c; cin >> a >> b >> c;
    if(a >= b)
        a %= b;
    for(int i = 1; i <= 1000000; i++)
    {
        a *= 10;
        arr[i] = a / b;
        a %= b;
    }
    cout << arr[c] << endl;
}
