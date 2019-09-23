#include<iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	if(num % 2 == 0 && num > 3)
		cout << "1" << endl;
	else if(num <= 3)
		cout << num << endl;
