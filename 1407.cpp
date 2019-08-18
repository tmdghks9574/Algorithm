#include<iostream>
using namespace std;

int main()
{
    long long int a,b; cin >> a >> b;

    long long int sum = 0;
    
    for(long long int i = a; i <= b; i++)
    {
        long long int tmp = i;
        long long int cnt = 1;
        while(1)
        {
            if(cnt == 1 && tmp % 2 == 1)
            {
                sum++;
                break;
            }
            if(tmp % 2 == 0)
            {
                cnt *= 2;
                tmp /= 2;
                continue;

            }
            if(tmp % 2 == 1)
            {
                sum += cnt;
                break;
            }
        }
    }
    cout << sum << endl;
}
