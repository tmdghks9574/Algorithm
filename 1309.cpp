#include<iostream>
#include<vector>
#include<map>
#include<cstdio>
#include<numeric>
#include<algorithm>
#include<cmath>
#include<stack>
#include<deque>
#include<queue>
#include<bitset>
#include<set>

using namespace std;
#define endl "\n"
#define ll long long
ll arr[100001];
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    arr[1] = 3; arr[2] = 7; arr[3] = 17;
    for(int i = 4; i <= n; i++)
    {
        arr[i] = (arr[i-1] * 2 + arr[i-2]) % 9901;
    }
    cout << arr[n] << endl;

}
