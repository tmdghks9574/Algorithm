#include<iostream>

using namespace std;

int main()
{
    int n;
	cin >> n;
	int cnt = 0;
	for(int i = 0; i < n; i++)
	{	
		int num, j = 2;
		cin >> num;
		if(num == 1)
			continue;
		else
		{   
			for(j; j <= num; j++)
			{   
				if(num % j == 0)
				break;
			}
				if(num == j)
					cnt++;
			
		}   
	 }   
		cout << cnt << endl;
}
