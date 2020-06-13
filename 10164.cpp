#include<bits/stdc++.h>
using namespace std;
int arr[17][17];
int main()
{
    int n,m,k; cin >> n >> m >> k;
    if(k != 0)
    {
        int i = 1, j = 0;
        while(k--)
        {
            j++;
            if(j > m)
            {
                i++;
                j = 1;
            }
        }
        for(int a = 1; a <= i; a++)
        {
            for(int b = 1; b <= j; b++)
            {
                if(a == 1)
                    arr[a][b] = 1;
                else
                    arr[a][b] = arr[a-1][b] + arr[a][b-1];
            }
        }
        int tmp = arr[i][j];
        for(int a = i; a <= n; a++)
        {
            for(int b = j; b <= m; b++)
            {
                if(a == i)
                    arr[a][b] = 1;
                else
                    arr[a][b] = arr[a-1][b] + arr[a][b-1];
            }
        }
        cout << tmp * arr[n][m] << endl;
    }
    else
    {
        for(int a = 1; a <= n; a++)
        {
            for(int b = 1; b <= m; b++)
            {
                if(a == 1)
                    arr[a][b] = 1;
                else
                    arr[a][b] = arr[a-1][b] + arr[a][b-1];
            }
        }
        cout << arr[n][m] << endl;
    }

}