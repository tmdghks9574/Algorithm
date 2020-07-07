#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
	int x,y,w,h; cin >> x >> y >> w >> h;
	int arr[4]={};
	arr[0] = abs(x);
	arr[1] = abs(w-x);
	arr[2] = abs(y);
	arr[3] = abs(h-y);
	sort(arr,arr+4);
	cout << arr[0] << '\n';
}
