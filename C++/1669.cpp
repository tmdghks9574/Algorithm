#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll x,y; cin >> x >> y;
    ll a = y - x;
    if(a == 1)
        cout << "1\n";
    else if(a == 2)
        cout << "2\n";
    else if(a == 3)
        cout << "3\n";
    else
    {
        ll sum = 1;
        ll i = 1;
        while(1)
        {
            sum = i * i;
            if(a == sum)
            {
                cout << 2 * i - 1 << endl;
                break;
            }
            else if(a < sum)
            {
                if((a + (sum - (i-1)*(i-1)) / 2) >= sum)
                {
                    cout << 2 * i -1 << endl;
                    break;
                }
                else
                {
                    cout << 2 * (i-1) << endl;
                    break;
                }
            }
            else
                i++;
        }
    }
}

