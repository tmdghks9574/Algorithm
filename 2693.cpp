#include<iostream>
#include<algorithm>
using namespace std;

int arr[10];

int main()
{
    int n; cin >> n;
    while(n--)
    {
        for(int i = 0; i < 10; i++)
            cin >> arr[i];
        sort(arr,arr+10);
        cout << arr[7] << endl;
    }
}
