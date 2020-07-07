#include<iostream>
using namespace std;

int main()
{
    int a,b,c,n; cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        b -= c;

        if(a < b)
            cout << "advertise"<<endl;
        else if(a == b)
            cout << "does not matter"<< endl;
        else
            cout << "do not advertise" << endl;
    }
}