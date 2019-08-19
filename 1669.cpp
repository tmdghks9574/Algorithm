#include<iostream>

using namespace std;

int main()
{
	int X,Y;
	cin >> X >> Y;

	int n = Y-X;
	int sum = 0;
	int i = 1;
	int cnt = 0;
	while(sum < n)
	{
		sum += i;
		cnt++;
		i++;
	}
	cout << cnt << endl;
}
