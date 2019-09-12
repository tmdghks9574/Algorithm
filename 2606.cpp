#include<iostream>
using namespace std;

int arr[102][102];
int arr2[102];

int main()
{
    int n,m; cin >> n >> m;
    int a,b;
    for(int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    int cnt = 0;
    int i = 1, j = 1;
    int tmp=0,temp;
cout << endl;
    for(i; i <= n; i++)
    {
        for(j; j <= n; j++)
        {
                cout << i << " " << j << endl;
            if(arr[i][j] == 1 && arr2[j] == 0)
            {
                arr2[j] = 1;
                arr[j][i] = 0;
                cnt++;
                temp = j;
                i = j-1;
                j = 1;
                //cout << i << " " << j << endl;
                break;
            }
        }
        i = temp-1;
        j = 1;
        tmp++;
        if(tmp == n)
            break;
            

        }
    cout << cnt << endl;
}

