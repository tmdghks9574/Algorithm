#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b%a == 0)
		return a;
	else if(b<a)
		return gcd(b,a);
	else
		return gcd(b%a,a);
}
int main()
{
	int n; cin>>n;
	while(n--)
	{
		int a,b; cin>>a>>b;
		a /= gcd(a,b);
		b /= gcd(a,b);
		int ans = a*b*gcd(a,b);
		cout << ans <<'\n';
	}
}
