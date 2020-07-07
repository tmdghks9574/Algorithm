#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    if(n % 2 == 0)
    {
        n = n / 2 + 1;
        cout << n * n << endl;
    }
    else
    {
        n = n / 2 + 1;
        cout << n * n + n << endl;
    }
}
