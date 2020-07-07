#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector< pair<int,int>> v;
    int n; cin >> n;
    int nn = n;
    while(nn--)
    {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(b,a));
    }
    sort(v.begin(),v.end());
    int cnt = 0;
    int tmp = 0;
    for(int i = 0; i < n; i++)
    {
        if(tmp <= v[i].second)
        {
            tmp = v[i].first;
            cnt++;
        }
    }
    cout << cnt << endl;

}
