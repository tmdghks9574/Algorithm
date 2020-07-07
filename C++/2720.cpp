#include<iostream>
using namespace std;

int arr[4] = {25,10,5,1};
int arr2[4];
int main()
{
    int n; cin >> n;
    while(n--)
    {
        int a; cin >> a;
        int cnt = 0;
        int i = 0;
        while(a > 0 || i != 4)
        {
            if(a - arr[i] < 0)
            {
                arr2[i] = cnt;
                i++;
                cnt = 0;
            }
            else
            {
                a -= arr[i];
                cnt++;
            }
        }
        for(int i = 0; i < 4; i++)
            cout << arr2[i] << " ";
        cout << endl;
    }
}

