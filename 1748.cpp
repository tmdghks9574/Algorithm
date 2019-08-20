#include<iostream>
using namespace std;
int main()
{
    int a; cin >> a;
    int sum = 0;
    int cnt = 1;
    int k = 9;
    int ans = 0;
    while(1)
    {
        sum += k;
        if(sum <= a)
        {
            ans += cnt * k;
            cnt++;
            k *= 10;
        }
        else
        {
            sum -= k;
            ans += cnt * (a - sum);
            break;
        }
    }
    cout << ans << endl;
}

