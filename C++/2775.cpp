#include<iostream>
using namespace std;

int arr[15][15];
int sum[16][16];

int main()
{
    arr[0][0] = 1;
    sum[0][0] = 1;
    for(int i = 1; i < 15; i++)
    {
        arr[0][i] = i+1;
        sum[0][i] = sum[0][i-1] + arr[0][i];
    }
    int s;
    for(int i = 1; i < 15; i++)
    {
        s = 0;
        for(int j = 0; j < 15; j++)
        {
            s += sum[i-1][j];
            sum[i][j] = s;
        }
    }
    int n; cin >> n;
    while(n--)
    {
        int a,b; cin >> a >> b;
        cout << sum[a-1][b-1] << endl;
    }
}
