#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n; cin >> n;
	int arr[n+1];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	int max_sum=0;
	int this_sum=0;

	if(n == 1)
		cout << arr[0] << endl;
	else{
		for(int i = 0; i < n; i++)
		{
			this_sum+= arr[i];
			if(this_sum >= max_sum)
				max_sum = this_sum;
			if(this_sum <= 0)
			{
				this_sum = 0;
				continue;
			}
		}
	cout << max_sum << endl;
	}
}


