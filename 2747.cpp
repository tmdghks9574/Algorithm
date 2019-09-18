#include<iostream>

using namespace std;
int main()
{
	int arr[48] = {};
	arr[0] = 0, arr[1] = 1 , arr[2] = 1;
	for(int i = 3; i < 47; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	int n; cin>>n;
	cout << arr[n]<<endl;
}
