#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int tmp = n;
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < tmp-1; k++)
            cout << " ";
        for(int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        tmp--;
        cout << endl;
    }
    tmp = n;
    for(int i = 0; i < n-1; i++)
    {
        for(int k = 0; k < i+1; k++)
              cout << " ";
        for(int j = 0; j < tmp-1; j++)
        {
            cout << "*";
        }
        cout << endl;
        tmp--;
    }
}
