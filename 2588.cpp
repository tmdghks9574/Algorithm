#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a,b; cin >> a >> b;
    printf("%d\n%d\n%d\n%d\n",b%10*a,b%100/10*a,b/100*a,a*b);
}
