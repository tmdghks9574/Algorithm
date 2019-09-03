#include<iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 0; j < n-i; j++)
			cout << " ";
		for(int k = 0; k < 2 * (i-1) + 1; k++)
			cout << "*";
		cout << '\n';
	}
	int k = 0,tmp = 0;
	for(int i = n; i > 1; i--)
	{
		k++;
		tmp = k;
		while(tmp--)
			cout << " ";
		for(int k = 0; k < 2 * (i-1)-1; k++)
			cout << "*";
		cout << '\n';
	}
}

