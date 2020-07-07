#include<iostream>
#include<cmath>
using namespace std;

double arr[10001];
int arr2[10001];
int arr3[10001];
int main()
{
    int n,m; cin >> n >> m;
    int sum = 0;
    int a = 0,k = 0;
    for(int i = n; i <= m; i++)
    {
        arr[k] = sqrt(i);
        arr2[k] = sqrt(i);
        if(arr[k] == arr2[k])
        {
            arr3[a] = arr[k];
            a++;
            sum += arr[k]*arr[k];
        }
        k++;
    }
    cout << sum << endl << arr3[0]*arr3[0] << endl;
}
