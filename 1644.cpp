#include<iostream>
using namespace std;

int arr[4000001];
int arr2[4000001];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= 4000000; i++)
        arr[i] = i;
    for(int i = 2; i <= 2000; i++)
    {
        if(arr[i] == 0)
        {
            continue;
        }
        for(int j = i+i; j <= 4000000; j += i)
        {
            arr[j] = 0;
        }
    }
    int k = 1;
    for(int i = 2; i <= 4000000; i++)
    {
        if(arr[i] > 0)
        {
            arr2[k++] = i;
        }
    }
    int sum = 0,cnt = 0, i = 1;
    int tmp = i;
    int tmp2 = n;
    while(tmp2--)
    {
        sum += arr2[i];
        if(sum == n)
        {
            sum = 0;
            cnt++;
            tmp++;
            i = tmp;
            continue;
        }
        else if(sum > n)
        {
            sum = 0;
            tmp++;
            i = tmp;
            continue;
        }
        else
            i++;
    }
    cout << cnt << endl;
}
