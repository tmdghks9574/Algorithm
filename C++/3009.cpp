#include<iostream>
using namespace std;
int x[1001];
int y[1001];
int main()
{
    for(int i = 0; i < 3; i++)
    {
        int a,b; cin >> a >> b;
        x[a]++;
        y[b]++;
    }
    for(int i = 0; i < 1001; i++)
    {
        if(x[i] == 1)
            cout << i << " ";
    }
    for(int i = 0; i < 1001; i++)
    {
        if(y[i] == 1)
            cout << i << endl;
    }
}



