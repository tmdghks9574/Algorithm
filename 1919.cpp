#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n; cin >> n;
	while(n--)
	{
		int num; cin >> num;
		int a[num+1];
		for(int i = 0; i < num; i++)
		{
			cin >> a[i];
		}
		sort(a,a+num);
		for(int i = 0; i < num; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}

