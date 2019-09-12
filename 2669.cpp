#include<iostream>
using namespace std;

int arr[102][102];

int main()
{
    for(int i = 0; i < 4; i++)
    {
        int a,b,c,d; cin >> a >> b >> c >> d;

        for(int i = a; i < c; i++)
        {
            for(int j = b; j < d; j++)
            {
                arr[i][j] =1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < 101; i++)
    {
        for(int j = 0; j < 101; j++)
        {
            if(arr[i][j] == 1)
                cnt++;
        }
    }
    cout << cnt << endl;
}
