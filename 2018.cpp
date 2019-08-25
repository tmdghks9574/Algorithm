#include<iostream>
using namespace std;
int arr[5000001];
int main()
{
    int n; cin >> n;
    int cnt =1;
    for(int i = 1; i <= n/2 + 1; i++)
    {
        arr[i] = i;
    }
    int left = 1;
    int right = 1;
    int sum = 0;
    while(right != n/2 + 3)
    {
        if(sum == n)
        {
            cnt++;
            sum -= arr[left];
            left++;
        }
        else if(sum < n)
        {
            sum += arr[right];
            right++;
        }
        else
        {
            sum -= arr[left];
            left++;
        }
    }
    cout << cnt << endl;
}
            


