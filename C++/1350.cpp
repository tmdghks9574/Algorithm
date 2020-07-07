#include<iostream>
#define ll long long
using namespace std;
ll arr[1001];

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    ll k; cin >> k;
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % k == 0)
            cnt += arr[i] / k;
        else
            cnt += arr[i] / k + 1;
    }
    cout << k * cnt << endl;
}

