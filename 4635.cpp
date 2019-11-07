#include <iostream>
#include<string>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cin >> n;
        if (n == -1)
            return 0;
        else
        {
            int sum = 0;
            int tmp = 0;
            int a,b; cin >> a >> b;
            sum += a * b;
            tmp = b;
            for(int i = 1; i < n; i++)
            {
                int c,d; cin >> c >> d;
                sum += c* (d - tmp);
                tmp = d;
            }
            cout << sum << " miles\n";
        }

    }
}