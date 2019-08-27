#include<iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    long long int *arr = new long long int[90];
    arr[0] = 1, arr[1] = 1;
    for(int j = 2; j < N; j++)
    {   
        arr[j] = arr[j-2] + arr[j-1];
    }   
    cout << arr[N-1] << endl;
    delete[] arr;
    return 0;
}

