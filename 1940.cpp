#include<iostream>

using namespace std;

int main()
{
    int N,M;
    cin >> N >> M;
    int *arr = new int[N];
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if(arr[i] + arr[j] == M)
            {
                cnt++;
                break;
            }
            else
                continue;
        }
    }
    cout << cnt << endl;
}          