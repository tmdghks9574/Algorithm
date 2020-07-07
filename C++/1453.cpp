#include<iostream>
int arr[101];
using namespace std;

int main()
{
    int cnt = 0;
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a; cin >> a;
        if(arr[a] == 1)
            cnt++;
        else
            arr[a]++;
    }
    cout << cnt << endl;
}
