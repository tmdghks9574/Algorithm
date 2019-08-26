#include<iostream>
using namespace std;
int arr[1001];
int arr2[1001];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <=n; i++)
        arr[i] = i;
    for(int i = 1; i <= n; i++)
    {
        arr2[i] = arr[i];
        arr[n+1] = arr[i];
        for(int j = 1; j <= n; j++)
        {
            arr[j] = arr[j+1];
        }
    }
    for(int i = 1; i <= n; i++)
        cout << arr2[i] << " ";
    cout << endl;
}
