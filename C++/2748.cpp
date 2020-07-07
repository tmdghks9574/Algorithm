#include<iostream>

using namespace std;
int main()
{
	long long int arr[91] = {};
	arr[0] = 0, arr[1] = 1 , arr[2] = 1;
	for(int i = 3; i <= 90; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	int n; cin>>n;
	cout << arr[n]<<endl;
}
