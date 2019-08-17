#include<iostream>
#include<cstring>
using namespace std;
int arr[11];
int main()
{
    int a; cin >> a;
    int i = 0;
    while(a != 0)
    {
        arr[i] = a % 10;
        a /= 10;
        i++;
    }
    int mul1 = 1, mul2 = 1;
    for(int j = 0; j < i-1; j++)
    {
        for(int k = 0; k <= j; k++)
        {
            mul1 *= arr[k];
        }
        for(int l = j+1; l < i; l++)
        {
            mul2 *= arr[l];
        }
        if(mul1 == mul2)
        {
            cout << "YES\n";
            return 0;
        }
        mul1 = 1, mul2 = 1;
    }
    cout << "NO\n";
}




