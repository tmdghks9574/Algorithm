#include<iostream>
#include<algorithm>
using namespace std;
int arr[10001];
int main()
{
    cin.tie(NULL);
    int n; cin >> n;
    int sum2 = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        sum2 += arr[i];
    }
    sort(arr,arr+n);
    int b; cin >> b;
    int ans = 0, sum = 0;
    if(arr[0] * n > b)
    {
        cout << b/n << endl;
        return 0;
    }
    else if(b >= sum2)
    {
        cout << arr[n-1] << endl;
        return 0;
    }
    else
    {
        int tmp = n;
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] == 0)
            {
                arr[i+1] -= sum;
                tmp--;
                continue;
            }
            if(b / arr[i] >= tmp)
            {
                sum += arr[i];
                arr[i + 1] -= sum;
                ans += arr[i];
                b -= arr[i] * tmp;
                tmp--;
            }
            else
                break;
        }
        ans += b / tmp;
        cout << ans << endl;
    }
}