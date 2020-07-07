#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        int a; scanf("%d",&a);
        int cnt = 0;
        int i = 1;
        while(1)
        {
            if(pow(5,i) > a)
                break;
            else
                cnt += a / pow(5,i);
            i++;
        }
        printf("%d\n",cnt);
    }
}