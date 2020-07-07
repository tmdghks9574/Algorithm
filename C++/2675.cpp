#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n; cin >> n;
	while(n--)
	{
		int n1; cin >> n1;
		string s; cin >> s;
		for(int i = 0; i < s.length(); i++)
		{
			for(int j = 0; j < n1; j++)
			{
				cout << s[i];
			}
		}
		cout << '\n';
	}
}
