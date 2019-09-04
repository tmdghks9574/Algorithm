#include<iostream>

using namespace std;

int main()
{
	for(int i = 0; i < 3; i++)
	{
		int *arr = new int[4];
		int sum = 0;
		for(int j = 0; j < 4; j++)
		{
			cin >> arr[j];
			if(arr[j] == 1)
				sum++;
		}
		if(sum == 4)
			cout << "E" << endl;
		else if(sum == 3)
			cout << "A" << endl;
		else if(sum == 2)
			cout << "B" << endl;
		else if(sum == 1)
			cout << "C" << endl;
		else
			cout << "D" << endl;

		delete[] arr;
	}
}
