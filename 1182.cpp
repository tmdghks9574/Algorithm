#include<iostream>
using namespace std;

int arr[21];

int main()
{
    int a,b; cin >> a >> b;
    for(int i = 0; i < a; i++)
        cin >> arr[i];

    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < (1 << a); i++)
    {
        sum = 0;
        for(int j = 0; j < a; j++)
        {
            if(i & (1 << j))
            {
                sum += arr[j];
            }
        }
        if(sum == b)
            cnt++;
    }
    cout << cnt << endl;
}
