#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int arr[11] = {};
        while(1)
        {
                int k = n % 10;
                if(k == 9)
                        arr[6]++;
                else
                        arr[k]++;
                if(arr[6] == 2)
                {
                        arr[6] = 0;
                        arr[10]++;
                }
                n /= 10;
                if(n == 0)
                        break;
        }
        arr[10] += arr[6];
        sort(arr,arr+11);
        cout << arr[10] << endl;
}
