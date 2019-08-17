#include<iostream>
using namespace std;
int arr[1001];
int main()
{
    int a,b; cin >> a >> b;
    int k = 1;
    for(int i = 1; i <=35; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            arr[k++] = i;
        }
    }
    int sum2 = 0;
    for(int i = 1; i <= 1000; i++)
        cout << arr[i] << " ";
    int sum = 0;
    for(int i = a; i <= b; i++)
        sum+=arr[i];
    
    cout << sum << endl;
}
