#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b % a == 0)
        return a;
    else
        return gcd(b % a, a);
}
int arr[101];
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int a = arr[0];
    for(int i = 1; i < n; i++)
    {
        cout << a / gcd(a,arr[i]) << "/" << arr[i] / gcd(a,arr[i]) << endl;
    }
}