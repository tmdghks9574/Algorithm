#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	int *arr = new int[10];

	int v = a * b * c;

	for(int i = 0; i < 9; i++)
	{
		if(v > 10)
		{
			arr[v % 10]++;
			v /= 10;
		}
		else
		{
			arr[v % 10]++;
			break;
		}
	}
	for(int i = 0; i < 10; i++)
		cout << arr[i] << endl;

	delete[] arr;
}
