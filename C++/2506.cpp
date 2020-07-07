#include<iostream>

int arr[101];

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    int score = 1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 1)
        {
            sum += score;
            score++;
        }
        else
            score = 1;
    }
    cout << sum << endl;
}
