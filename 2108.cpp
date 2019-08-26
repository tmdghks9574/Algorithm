#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
double arr[500002];
int arr2[8002];
int main()
{
    int n; cin >> n;
    double sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] < 0)
        {
            arr2[4000+abs(arr[i])]++;
        }
        else
            arr2[arr[i]]++;
    }

    sort(arr,arr+n);
    sum /= n;
    if(sum + 0.5 > (int)sum + 1)
        sum = (int)sum + 1;
    else
        sum = (int)sum;

    cout << sum << endl << arr[n/2] << endl;
    int max = arr2[0];
    for(int i = 1; i < 8001; i++)
    {
        if(arr2[i] > max)
            max = arr2[i];


