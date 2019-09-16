#include<iostream>
using namespace std;
int a[101][101];
int b[101][101];

int main()
{
    int c,d; cin >> c >> d;
    for(int i = 0; i < c; i++)
        for(int j = 0; j < d; j++)
            cin >> a[i][j];
    
    for(int i = 0; i < c; i++)
        for(int j = 0; j < d; j++)
            cin >> b[i][j];

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < d; j++)
        {
            a[i][j] += b[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

