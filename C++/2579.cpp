#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int *stair = new int[301];
    int *DP = new int[301];
    int numcase;
    cin >> numcase;
    for(int i = 1; i <= numcase; i++)                                                                                                                                      
    {   
        cin >> stair[i];
    }   
    DP[0] = 0;
    DP[1] = stair[1];
    DP[2] = stair[1] + stair[2];

    for(int i = 3; i <= numcase; i++)
    {   
        DP[i] = max(DP[i-2] + stair[i] , DP[i-3] + stair[i-1] + stair[i]);
    }   
    cout << DP[numcase] << endl;

    return 0;
}
