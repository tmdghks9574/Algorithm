#include<iostream>
using namespace std;
int main()
{
	long long N;
	long long count;

	cin >> N;

	count = (long long)(((3 * N * N) + (5 * N) + 2) / 2);

	cout << count % 45678<< endl;
}

