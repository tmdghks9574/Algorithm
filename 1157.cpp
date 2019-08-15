#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
	int a[91]={};
	int tmp[26]={};
	int c = 0,ans = 0,max = 0;
	string s; cin>> s;
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] >= 'a')
			s[i] -= 32;
		c = (int) s[i];
		a[c]++;
		tmp[c-65]++;
	}
	sort(tmp,tmp+26);
	if(tmp[25] == tmp[24])
		cout << "?" << endl;
	else
	{
		max = a[65];
		ans = 65;
		for(int i = 66; i <=90; i++)
		{
			if(a[i] > max)
			{
				max = a[i];
				ans = i;
			}
		}
		cout << (char) ans << endl;
	}
}
