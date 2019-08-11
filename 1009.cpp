#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++)
	{
		int a,b,tmp;
		cin >> a >> b;
		int c = b % 4;
		tmp = a;
		if(a >= 10 && a % 10 == 0 )
			cout << "10" << endl;
		else if(c == 0)
		{
			a = 1;
			for(int j = 0; j < 4; j++)
			{
				a *= tmp ;
			}
			cout << a % 10 << endl;
		}
		else
		{
			a = 1;
			for(int k = 1; k <= c; k++)
			{
				a *= tmp;
			}
		
			cout << a % 10 << endl;
		}
	}
	return 0;
}
