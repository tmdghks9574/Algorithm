#include<iostream>
using namespace std;

int main()
{
        int n;
        cin >> n;
        int cnt = 0;
        int k = 64;
        if(n == 64)
        {
                cout << "1" << endl;
                return 0;
        }

        while(1)
        {
                k /= 2;
                if(n < k)
                        continue;
                else
                {
                        n -= k;
                        cnt++;
                        if(n == 0)
                                break;
                }
        }
        cout << cnt << endl;
}
