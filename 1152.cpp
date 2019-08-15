#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string s;
	getline(cin , s);
	int c = s.length();
	int cnt = 0;
	for(int i = 0; i < c; i++)
	{
		if(s[i] == ' ' && i != 0 && i != c-1)
			cnt++;
	}
	if(c == 1 && s[0] == ' ')
		cout << cnt << '\n';
	else
		cout << cnt+1 << '\n';
}
