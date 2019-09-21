#include<iostream>
#include<algorithm>
using namespace std;

int arr[101];
int sum[1000001];

int main()
{
    int n,m;
    cin >> n >> m;
    int a = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            for(int k = j+1; k < n; k++)
            {
                sum[a] = arr[i] + arr[j] + arr[k];
                a++;
            }
            
        }
    }
    sort(sum,sum+1000001);
    for(int i = 0; i < 1000001; i++)
    {
        if(sum[i] == m)
        {
            cout << sum[i] << endl;
            return 0;
        }
        else if(sum[i] > m)
        {
            cout << sum[i-1] << endl;
            return 0;
        }
        else
            continue;
    }
    cout << sum[1000000] << endl;
}
