#include<iostream>
using namespace std;

int main()
{
	int arr[10001] = {0};
	int sum[10001] = {0};
	for(int i = 1; i <= 10000; i++)
	{	
		int k = i;
		for(int j = 0; j < 5; j++)
		{
			sum[i] += k % 10;
			k /= 10;
		}
		sum[i] += i;
		if(sum[i] <= 10000)
		arr[sum[i]] = 1;
	}
	for(int i = 1; i <=10000; i++)
	{
		if(arr[i] == 0)
			cout << i << '\n';
	}

}