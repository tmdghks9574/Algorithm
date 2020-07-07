#include<iostream>
int arr[82][82];

using namespace std;

int main()
{
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = arr[1][1];
    int a,b;
    for(int i = 1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                a = i;
                b = j;
            }
        }
    }
    cout << max << endl << a << " " << b << endl;
}

    
