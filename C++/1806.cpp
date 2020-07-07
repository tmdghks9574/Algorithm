#include<iostream>
#include<algorithm>
using namespace std;

int arr[100001];
int arr2[100001];

int main()
{
    int a,b; cin >> a >> b;
    int sum = 0;
    int left = 0, right = -1;
    int k = 0;
    for(int i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum < b)
    {
        cout << "0\n";
        return 0;
    }
    else
    {
        sum = 0;
        while(right != a)
        {
            if(sum >= b)
            {
                arr2[k] = right - left + 1;
                k++;
                sum -= arr[left];
                left++;
            }
            else
            {
                right++;
                sum += arr[right];
            }
        }
    }
    sort(arr2,arr2+k);
    cout << arr2[0] << endl;
}


