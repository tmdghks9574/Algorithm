#include<iostream>
using namespace std;

int main()
{
	int n; cin >> n;
	int a = 5, b = 3;
	if(n==4 ||n== 7)
	{
		cout << "-1" <<endl;
		return 0;
	}
	else
	{
		if(n % a % 3 == 0)
		{
			cout << n / a + n % a / b << endl;
		}
		else if(n % a == 1)
		{
			cout << n / a +1 << endl;
		}
		else if(n % a == 2)
			cout << n / a + 2 << endl;
		else if(n % a == 4)
			cout << n / a + 2 << endl;
	}
}

