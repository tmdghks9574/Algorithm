#include<iostream>
#include<cstring>
using namespace std;
int gcd(long long int a,long long int b)
{
    if(a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}
int main()
{
    long long int a,b; cin >> a >> b;
    int k = gcd(a,b);
    for(int i = 0; i < k; i++)
        cout << "1";
    cout << endl;
}
    
