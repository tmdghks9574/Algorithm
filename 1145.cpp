#include<iostream>
using namespace std;
int arr[5];
int main()
{
    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    int cnt = 0;
    for(int i = 1; i <= 1000000; i++)
    {
        cnt = 0;
        for(int j = 0; j < 5; j++)
        {
            if(i % arr[j] == 0)
            {
                cnt++;
                if(cnt == 3)
                {
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }
}
