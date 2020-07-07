#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        int sum[2] = {0,};
        char arr[11][11] = {0,};
        int a,b; cin >> a >> b;
        for(int i = 0; i < a; i++)
        {
            for(int j = 0; j < b; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < b; i+=2)
        {
            for(int j = 0; j < a; j++)
            {
                if(arr[j][i] == '.')
                    sum[0]++;
            }
        }
        for(int i = 1; i < b; i+=2)
        {
            for(int j = 0; j < a; j++)
            {
                if(arr[j][i] == '.')
                    sum[1]++;
            }
        }
        cout << max(sum[0],sum[1]) << endl;

    }
}

