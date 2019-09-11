#include<iostream>
#include<algorithm>
using namespace std;
int arr[7];
int main()
{
    int sum = 0;
    int n,cnt = 0;
    for(int i = 0; i < 7; i++)
    {
        cin >> n;
        if(n % 2 == 1)
        {
            sum+=n;
            cnt++;
            arr[i] = n;
        }
    }
    sort(arr,arr+7);
    int k;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] != 0)
        {
            k = arr[i];
            break;
        }
    }
    if(cnt > 0)
    {
        cout << sum << endl << k << endl;
    }
    else
        cout << "-1" << endl;
}
