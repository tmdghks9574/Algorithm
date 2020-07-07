#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int n; cin >> n;
    long long int sum = 0;
    for(long long int i = 1; i < 100000; i++)
    {
        sum = (i * (i+1))/2;
        //cout << sum << endl;
        if(sum == n)
        {
            cout << i << endl;
            break;
        }
        else if(sum > n)
        {
            cout << i-1 << endl;
            break;
        }
    }
}
