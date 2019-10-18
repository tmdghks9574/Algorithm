#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    while(1)
    {
        int *a = new int[3];
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;
        else
        {
            a[0] *= a[0], a[1] *= a[1], a[2] *= a[2];
            sort(a,a+3);
            if(a[0] + a[1] == a[2])
                cout << "right\n";
            else
                cout << "wrong\n";
        }
    }
}