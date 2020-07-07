#include<iostream>
int arr[101][101];
int arr2[101][101];
int arr3[101][101];
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            cin >> arr[i][j];
        }
    }
    int c,d; cin >> c >> d;
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < d; j++)
        {
            for(int k = 0; k < b; k++)
            {
                arr3[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < d; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}
