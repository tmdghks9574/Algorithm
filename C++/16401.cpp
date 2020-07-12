#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int> v;
bool check(int a)
{
    int cnt = 0;
    for(int i = 0; i < v.size(); i++)
    {
        cnt += v[i] / a;
    }
    if(cnt >= n)
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int left = 1, right = 0;
    for(int i = 0; i < m; i++)
    {
        int a; cin >> a;
        v.push_back(a);
        right = max(right,a);
    }
    int result = 0;
    while (left <= right)
    {
        int mid = (left +right) / 2;
        if (check(mid))
        {
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }
    cout << result << "\n";
}