#include<iostream>
#include<algorithm>
using namespace std;
int arr[8];
int arr2[8];
int arr3[5];
int main()
{
    for(int i = 0; i < 8; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr,arr+8);
    int k = 0;
    int sum = arr[7] + arr[6] + arr[5] + arr[4] + arr[3];
    for(int i = 3; i <= 7; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(arr2[j] == arr[i])
                arr3[k++] = j;
        }
    }
    cout << sum << endl;
    sort(arr3,arr3+5);
    for(int i = 0; i < 5; i++)
        cout << arr3[i]+1 << " ";
    cout << endl;
}

