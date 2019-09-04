#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int tmp = n;
    for(int i = 0; i < n; i++)
    {
        for(int k = 0; k < i; k++)
            cout << " ";
        for(int j = 0; j < 2*tmp -1; j++)
        {
            cout << "*";
        }
        tmp--;
        cout << endl;
    }
    tmp = n;
    for(int i = 0; i < n-1; i++)
    {
        for(int k = tmp-2; k > 0; k--)
              cout << " ";
        for(int j = 0; j < 2*i +3; j++)
        {
            cout << "*";
        }
        cout << endl;
        tmp--;
    }
}
