#include<iostream>
#include<algorithm>
#include<cstring>
#include<functional>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int arr[s.length()+1];
	for(int i = 0; i < s.length(); i++)
		arr[i] = s[i]-48;
	sort(arr,arr+s.length(),greater<int>());
	for(int i = 0; i < s.length(); i++)
		cout << arr[i];
	
}
