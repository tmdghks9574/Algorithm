#include<iostream>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    a *= b;
    for(int i = 0; i < 5; i++)
    {
        int c; cin >> c;
        cout << c - a << endl;
    }
}
