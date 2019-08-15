#include<iostream>
using namespace std;

int main()
{
	int n; cin >> n; int cnt = 0;
	
	if(n < 100)
		cout << n << '\n';
	else
	{
		for(int i = 100; i <= n; i++)
		{
			int k = i;
			int arr[3] = {};
			for(int j = 0; j < 3; j++)
			{
				arr[2-j] = k % 10;
				k /= 10;
			}
			if(arr[2] - arr[1] == arr[1] - arr[0])
				cnt++;
		}
		if(n == 1000)
			cout << cnt + 98 << '\n';
		else
			cout << cnt + 99 << '\n';
	}
}
