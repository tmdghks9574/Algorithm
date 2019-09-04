#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr1[4]={};
	int arr2[4]={};
	int max[4]={};
	for(int i = 0; i < 4; i++)
	{
		cin >> arr1[i] >> arr2[i];
	}
	max[0] = arr2[0];
	for(int i = 1; i < 4; i++)
	{
		max[i] =max[i-1]+ arr2[i] - arr1[i];
	}
	sort(max,max+4);
	cout << max[3] << endl;
}
