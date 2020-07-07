#include<iostream>

using namespace std;

int arr[302][302];

int main()
{
    int n,m; cin >> n >> m;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int a; cin >> a;

    while(a--)
    {
        int sum = 0;
        int b,c,d,e; cin >> b >> c >> d >> e;

        for(int i = b; i <= d; i++)
        {
            for(int j = c; j <= e; j++)
            {
                sum += arr[i][j];
            }
        }
        cout << sum << endl;
    }
}
