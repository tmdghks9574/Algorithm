#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n; cin >> n;
    int tmp = n;
    vector<pair<int,string>> v;
    while(n--)
    {
        string s; cin >> s;
        int a = s.size();
        v.push_back(make_pair(a,s));
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < tmp-1; i++)
    {
        if(v[i].second == v[i+1].second)
            continue;
        cout << v[i].second << endl;
    }
    cout << v[tmp-1].second << endl;
}