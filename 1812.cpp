#include<iostream>
using namespace std;

int arr[1001];
int arr2[1001];

int main()
{
    int n; cin >> n;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sum /= 2;
    for(int i = 0; i < n-1; i+=2)
    {
        sum -= arr[i];
    }
    arr2[0] = arr[n-1] -sum;
    for(int i = 1; i < n; i++)
    {
        arr2[i] = arr[i-1] - arr2[i-1];
    }
    for(int i = 0; i < n; i++)
        cout << arr2[i] << endl;
}
    
