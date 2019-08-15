#include<iostream>
using namespace std;

int gcd(int a,int b)
{
      if(a % b == 0)
        return b;
    else
        return gcd(b,a % b);
}

int main()
{
    int n,m; cin >> n >> m;
    n -= n % 100;
    int k = 1;
    int cnt = 0;
    n -= 1;
    while(1)
    {
        n++;
        k = gcd(n,m);
        if(k == m)
        {
            if(cnt < 10)
                cout << "0" << cnt << endl;
            else
                cout << cnt << endl;
            break;
        }
        else
            cnt++;
    }
}
        
