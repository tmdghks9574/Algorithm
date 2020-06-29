#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int prime[5000001];
int main()
{
    for(int i = 0; i <= 5000001; i++)
        prime[i] = i;
    prime[0] = prime[1] = -1;
    for (int i = 2; i * i <= 5000001; i++)
    {
        if (prime[i] == i)
            for (int j = i * i; j <= 5000001; j += i)
                if(prime[j] == j) prime[j] = i;
    }

    int n; scanf("%d",&n);
    while(n--)
    {
        int a; scanf("%d",&a);
        if(!prime[a])
        {
            printf("%d\n",a);
            continue;
        }
        while(a > 1)
        {
            printf("%d ",prime[a]);
            a /= prime[a];
        }
        printf("\n");
    }
}