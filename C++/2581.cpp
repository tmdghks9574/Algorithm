#include<iostream>
using namespace std;
int arr[10001];
int arr2[10001];
int main()
{
    for(int i = 1; i <= 10000; i++)
        arr[i] = i;
    arr[1] = 0;
    int sum = 0;

    for(int i = 2; i <= 100; i++)
    {
        for(int j = i+i; j <= 10000; j+=i)
        {
            arr[j] = 0;
        }
    }
    int n,m; cin >> n >> m;
    int j = 0;
    for(int i = n; i <= m; i++)
    {
        if(arr[i] > 0)
        {
            sum += i;
            arr2[j] = i;
            j++;
        }
        else
            continue;
    }
    if(j == 0)
        cout << "-1" << endl;
    else
        cout << sum << endl << arr2[0] << endl;
}
