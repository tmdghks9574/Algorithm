#include<iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	while(n--)
	{
		int n1; cin >> n1;
		double arr[n1] , sum = 0;
		double m;
		for(int i = 0; i < n1; i++)
		{
			cin >> arr[i];
			sum+= arr[i];
		}
		m = sum / n1;
		double c = 0;
		for(int i = 0; i < n1; i++)
		{
			if(arr[i] > m)
				c++;
		}
		c /= n1;
		cout.precision(3);
		cout << fixed << c*100 << "%\n";
	}
}