#include<iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int *a = new int[3];
	int tmp = 0, cnt = 0, b = N;
	
	while(1)
	{	
		cnt++;
		a[0] = N / 10;
		a[1] = N % 10;
		tmp = a[1];
		a[1] = (a[0] + a[1]) % 10;
		a[0] = tmp;
		N = a[0] * 10 + a[1];
		if(N == b)
			break;
	}
	cout << cnt<<'\n';
}

