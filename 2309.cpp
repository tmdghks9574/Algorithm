#include<iostream>
#include<algorithm>
using namespace std;
int a[9];
int main()
{
	for(int i = 0; i < 9; i++)
		cin >> a[i];
	int sum = 0;
	sort(a,a+9);
	for(int i = 0; i < 7; i++)
		sum += a[i];
	if(sum == 100)
	{
		for(int i = 0; i < 7; i++)
			cout << a[i]<< '\n';
	}
	else
	{
		while(next_permutation(a,a+9))
		{
			sum = 0;
			for(int i = 0; i < 7; i++)
				sum +=a[i];
			if(sum == 100)
			{
				sort(a,a+7);
				for(int i = 0; i < 7; i++)
					cout << a[i]<< '\n';
				break;
			}
			else
				continue;
		}

	}
}
