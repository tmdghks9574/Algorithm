#include<bits/stdc++.h>
using namespace std;
#define ss s.insert(sum)
int arr[505][505];

int main()
{
    int n,m; cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    set<int> s;
    for(int i = 0; i < n; i++) // 가로,세로 일자
    {
        for(int j = 0; j < m; j++)
        {
            int sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3];
            s.insert(sum);
            sum = arr[i+1][j]+arr[i][j]+arr[i+2][j]+arr[i+3][j];
            ss;
        }
    }
    for(int i = 0; i < n; i++) // 네모
    {
        for(int j = 0; j < m; j++)
        {
            int sum = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1];
            s.insert(sum);
        }
    }
    for(int i = 0; i < n; i++) // 뻐큐
    {
        for(int j = 0; j < m; j++)
        {
            int sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
            s.insert(sum);
            sum = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+1][j+1];
            s.insert(sum);
            sum = arr[i+1][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            s.insert(sum);
            sum = arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
            s.insert(sum);
        }
    }
    for(int i = 0; i < n; i++) // ㄴ
    {
        for(int j = 0; j < m; j++)
        {
            int sum = arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
            ss;
            sum = arr[i+2][j]+arr[i+2][j+1]+arr[i][j+1]+arr[i+1][j+1];
            ss;
            sum = arr[i][j+2]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
            ss;
            sum = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
            ss;
            sum = arr[i][j]+arr[i+1][j]+arr[i][j+1]+arr[i][j+2];
            ss;
            sum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2];
            ss;
            sum = arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j];
            ss;
            sum = arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
            ss;
        }
    }
    for(int i = 0; i < n; i++) // 계단
    {
        for(int j = 0; j < m; j++)
        {
            int sum = arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1];
            ss;
            sum = arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j]+arr[i+2][j];
            ss;
            sum = arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+1][j+2];
            ss;
            sum = arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2];
            ss;
        }
    }
    auto iter = s.end(); iter--;
    cout << *iter << endl;
}