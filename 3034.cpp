#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,w,h;
    cin >> a >> w >> h;
    while(a--)
    {
        int b; cin >> b;
        b *= b;
        int c = w*w + h*h;
        if(b <= max(w,h) * max(w,h) || b <= c)
        {
            cout << "DA\n";
        }
        else
            cout <<"NE\n";
    }
}

