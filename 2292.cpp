#include<iostream>
using namespace std;
int main()
{
	double n; cin >> n;
	int a,cnt;
	double n1 = (n-1)/6;
	if(n == 1)
	{cout << "1" << endl;
		return 0;}
	else{
	for(int i = 1; 50000; i++)
	{
		a = i * (i+1) / 2;
		if(a >= n1)
		{
			cnt = i;
			break;
		}
	}}
	cout << cnt+1 << endl;
}
