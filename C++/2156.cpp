#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int *drink = new int[10001];
    int *DP = new int[10001];
    int numcase;
    cin >> numcase;
    for(int i = 1; i <= numcase; i++)
	{   
        cin >> drink[i];
    }   
    DP[0] = 0;
    DP[1] = drink[1];
    DP[2] = drink[1] + drink[2];

    for(int i = 3; i <= numcase; i++)
    {   
        DP[i] = max(DP[i-2] + drink[i] , DP[i-3] + drink[i-1] + drink[i]);
		cout << "DP[" << i << "] = " << DP[i] << endl;
    }   
    cout << DP[numcase] << endl;

    return 0;
}

