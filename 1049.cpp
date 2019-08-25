#include<iostream>
#include<algorithm>
using namespace std;
int arr1[101];
int arr2[101];

int main()
{
    int n,m; cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> arr1[i] >> arr2[i];
    }
    sort(arr1,arr1+m);
    sort(arr2,arr2+m);
    int cnt = 0;
    if(arr1[0] <= arr2[0] * 6)
    {
        cnt += n / 6 * arr1[0];
        n %= 6;
        if(arr1[0] <= arr2[0] * n)
        {
            cnt += arr1[0];
        }
        else
            cnt += arr2[0] * n;
    }
    else
        cnt += arr2[0] * n;

    cout << cnt << endl;
}


