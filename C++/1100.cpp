#include<iostream>
using namespace std;
char arr[9][9];
int main()
{
    int cnt = 0;
    for(int i = 1; i < 9; i++)
    {
        for(int j = 1; j < 9; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < 9; i+=2)
    {
        for(int j = 1; j < 9; j+=2)
        {
            if(arr[i][j] == 'F')
                cnt++;
        }
    }
    for(int i = 2; i < 9; i+=2)
    {
        for(int j = 2; j < 9; j+=2)
        {
            if(arr[i][j] == 'F')
                cnt++;
        }
    }
    cout << cnt << endl;
}
