#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long

int arr[100001];
ll sum[100001];
int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    int tmp = n;
    for(int i = 0; i < n; i++)
    {
        sum[i] = arr[i] * tmp;
        tmp--;
    }
    sort(sum,sum+n);
    cout << sum[n-1] << endl;
}
