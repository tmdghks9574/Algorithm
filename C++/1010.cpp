#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n; cin >> n;
	while(n--)
	{
		int a,b; cin >> a >> b;
		int ans = 1;
		int arr[a+1];
		for(int i = 1; i <= a; i++)
		{
			arr[i] = i;
		}
		for(int i = 0; i < a; i++)
		{
			ans *= b;
			b--;
			for(int j = 1; j <= a; j++)
			{
				if(ans % arr[j] == 0)
				{
					ans /= arr[j];
					arr[j] = 1;
				}
				else
					continue;
			}
		}
		cout << ans << '\n';			
	}
}
		
