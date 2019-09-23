#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int arr[11];
int sum[11];
int main()
{
    int s = 0; 
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        s += arr[i];
        sum[i] = s;
    }
    for(int i = 0; i < 10; i++)
    {
        if(sum[i] == 100)
        {
            cout << "100\n";
            return 0;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        if(sum[i] > 100)
        {
            if(abs(sum[i-1] - 100) == abs(sum[i] - 100))
            {
                cout << sum[i] << endl;
                return 0;
            }
            else if(abs(sum[i-1] - 100) < abs(sum[i] - 100))
            {
                cout << sum[i-1] << endl;
                return 0;
            }
            else
            {
                cout << sum[i] << endl;
                return 0;
            }
        }
    }
    cout << sum[9] << endl;

}
    
