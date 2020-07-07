#include<iostream>
#include<string>
using namespace std;
char arr[100][100];
int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k = 0;
    for(int i = 1; i <= 100; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 1; j <= n; j++)
                arr[i][j] = s[k++];
        }
        else
            for(int j = n; j >= 1; j--)
                arr[i][j] = s[k++];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= s.size()/n; j++)
        {
            if(arr[j][i] != 0)
            {
                cout << arr[j][i];
            }
        }
    }
    cout << endl;
}

