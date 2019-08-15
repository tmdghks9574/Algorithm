#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n], b[n];
	long long int ans = 0;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
		cin >> b[i];
	sort(a,a+n);
	sort(b,b+n,greater<int>());
	for(int i = 0; i < n; i++)
	{
		ans += a[i]*b[i];
	}
	cout << ans << '\n';
}

