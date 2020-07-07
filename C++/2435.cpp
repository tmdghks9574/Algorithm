#include<iostream>
#include<algorithm>
using namespace std;

int arr[102];
int sum[102];
int main()
{
    int a; cin >> a;
    int b; cin >> b;
    for(int i = 0; i < a; i++)
        cin >> arr[i];

    for(int i = 0; i <= a-b; i++)
    {
        for(int j = i; j < i+b; j++)
        {
            sum[i] += arr[j];
        }
    }
    sort(sum,sum+(a-b)+1);
    cout << sum[a-b] << endl;
}
