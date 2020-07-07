#include<iostream>
using namespace std;
char arr[101][101];

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> arr[i][j];
    int cnt1 = 0;
    int cnt2 = 0;
    int tmp = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            if(arr[i][j] == '.')
            {
                tmp++;
            }
            else if(arr[i][j] == 'X')
            {
                if(tmp >= 2)
                {
                    cnt1++;
                    tmp = 0;
                }
                else
                    tmp = 0;
                
            }
            if(j == n)
            {
                if(tmp >= 2)
                    cnt1++;
                cout << "  a  "; 
                tmp = 0;
            }
            cout << tmp << " " << cnt1 << endl;
        }
   cout << endl;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            if(arr[j][i] == '.')
            {
                tmp++;
            }
            else if(arr[j][i] == 'X')
            {
                if(tmp >= 2)
                {
                    cnt2++;
                    tmp = 0;
                }
                else
                    tmp = 0;
            }
            if(j == n)
            {
                if(tmp >= 2)
                    cnt2++;
                tmp = 0;
            }
            cout << tmp << " " << cnt2 << endl;
        }
    cout << cnt1 << " " << cnt2 << endl;
}
