#include<iostream>
#include<algorithm>
using namespace std;

int arr[10];

int main()
{
    int c,d; cin >> c >> d;
    arr[0] = d;
    for(int i = 1; i < 10; i++)
    {
        int a,b; cin >> a >> b;
        arr[i] = arr[i-1] - a + b;
    }
    sort(arr,arr+10);
    cout << arr[9] << endl;
}
