#include<bits/stdc++.h>
using namespace std;
int arr[21][21];
int dice[7];
int tmp[7];
int n,m,x,y,k;
void swap()
{
    for(int i = 1; i <= 6; i++)
        tmp[i] = dice[i];
}
void check()
{
    if(arr[x][y] == 0)
        arr[x][y] = dice[3];
    else
    {
        dice[3] = arr[x][y];
        arr[x][y] = 0;
    }
}
int main()
{
    cin >> n >> m >> x >> y >> k;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cin >> arr[i][j];
    }
    ++x,++y;
    while(k--)
    {
        int a; cin >> a;
        if(a == 4)
        {
            x++;
            if(x > n)
            {
                x--;
                continue;
            }
            swap();
            dice[1]=tmp[4]; dice[2]=tmp[1]; dice[3]=tmp[2]; dice[4]=tmp[3];
            cout << dice[1] << endl;
            check();
        }
        else if(a == 3)
        {
            x--;
            if(x < 1)
            {
                x++;
                continue;
            }
            swap();
            dice[1]=tmp[2]; dice[2]=tmp[3]; dice[3]=tmp[4]; dice[4]=tmp[1];
            cout << dice[1] << endl;
            check();
        }
        else if(a == 2)
        {
            y--;
            if(y < 1)
            {
                y++;
                continue;
            }
            swap();
            dice[1]=tmp[6]; dice[3]=tmp[5]; dice[5]=tmp[1]; dice[6]=tmp[3];
            cout << dice[1] << endl;
            check();
        }
        else
        {
            y++;
            if(y > m)
            {
                y--;
                continue;
            }
            swap();
            dice[1]=tmp[5]; dice[3]=tmp[6]; dice[5]=tmp[3]; dice[6]=tmp[1];
            cout << dice[1] << endl;
            check();
        }
    }
}