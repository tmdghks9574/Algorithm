#include<iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++)
	{
		int x,y;
		cin >> x >> y;
		int sum = 0;
		for(int j = 1; j <= y-x; j++)
		{
			sum +=j;
			if(sum > y-x)
			{
				cout << j+1 << endl;
				break;
			}
		}
	}
	return 0;
}
