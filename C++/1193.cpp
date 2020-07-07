#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int k,a;
    for(int i = 1; i < 10000; i++)
    {
        if(i*(i+1)/2 >= n)
        {
            k = i;
            a = i*(i+1)/2;
            break;
        }
    }
    int c = a - n;

    if(k % 2 == 1)
    {
       cout << 1+c << "/" << k - c << endl;
    }
    else
    {
        cout << k - c << "/" << 1+c << endl;
    }
}
