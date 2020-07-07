#include<iostream>

using namespace std;
int arr[1100];
int main()
{
    int sum = 0;
    for(int i = 0; i < 10; i++)
    {
        int a; cin >> a;
        sum += a;
        arr[a]++;
    }
    int max = arr[1];
    for(int i = 2; i < 1001; i++)
    {
        if(max < arr[i])
        {
            max = i;
        }
    }
    cout << sum/10 << endl <<max << endl;
}


