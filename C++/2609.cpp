#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(a % b == 0)
		return b;
	else
		gcd(b,a % b);
}

int main()
{
	int n1,n2; cin >> n1 >> n2;
	cout << gcd(n1,n2) << '\n';
	int a = n1 / gcd(n1,n2);
	int b = n2 / gcd(n1,n2);
	cout << a * b * gcd(n1,n2) << '\n';
}
	
