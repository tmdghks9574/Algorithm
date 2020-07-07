#include<iostream>
#include<cmath>
using namespace std;
int arr[2188][2188];
int cnt[3];
int main()
{
    int a = 0;
    int n; cin >> n;
    int tmp = n;
    while(tmp != 1)
    {
        tmp /= 3;
        a++;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < 5; i++)
        cout << pow(3,i) << endl;
}
