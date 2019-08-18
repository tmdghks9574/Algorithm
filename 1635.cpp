#include<iostream>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    while(m--)
    {
        int *arr = new int[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(int i = 0; i < n/2; i++)
        {
            if(arr[i] == -1)
                cout << "-1 ";
            else
                cout << "1 ";
        }
        for(int i = n/2; i < n; i++)
        {
            if(arr[i] == -1)
                cout << "1 ";
            else
                cout << "-1 ";
        }
        cout << endl;
        delete[] arr;
    }
}

