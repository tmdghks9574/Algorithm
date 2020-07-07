#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double arr[n],sum;
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr,arr+n);
	int c = arr[n-1];

	for(int i = 0; i < n; i++)
	{
		sum += arr[i] * 100 / c;
	}
	
	sum /= n;
	cout.precision(2);
	cout << fixed << sum << endl;
}
