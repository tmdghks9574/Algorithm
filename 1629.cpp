#include<iostream>
#include<cmath>
using namespace std;
long long arr[10001];
#define ll long long
int main()
{
    ll a,b,c; cin >> a >> b >> c;
    arr[1] = a % c;
    ll i;
    ll d = a;
    ll e = 0;
    for(i = 2; i < 10001; i++)
    {
        a *= d;
        arr[i] = a % c;
        a = arr[i];
        if(arr[i] == arr[1])
        {
            e = 0;
            break;
        }
        else if(arr[i] == arr[i-1])
        {
            e = 1;
            break;
        }

    }
    if(e == 0)
    {
        i -= 1;
        int k = b % i;
        cout << arr[k] << endl;
    }
    else
    {
        if(b == 1)
        {
            cout << arr[1] << endl;
            return 0;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }

}
