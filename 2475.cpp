#include<iostream>
using namespace std;
int arr[6];
int main()
{
    int sum = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum += arr[i] * arr[i];
    }
    cout << sum % 10 << endl;
}
