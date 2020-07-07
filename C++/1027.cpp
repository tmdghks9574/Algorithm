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

using namespace std;
#define endl "\n"
#define ll long long

deque<double> d1;
deque<double> d2;
int ans[51];
int ans_back[51];
int main (){

    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int a; cin >> a;
        d1.push_back(a);
        d2.push_front(a);
    }
    double dic = -(1e10);
    for(int i = 0; i < n-1; i++)
    {
        dic = -(1e10);
        for(int j = i+1; j < n; j++)
        {
            if((d1[j]-d1[i])/(j-i) > dic)
            {
                ans[i]++;
                dic = (d1[j]-d1[i])/(j-i);
            }
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        dic = -(1e10);
        for(int j = i+1; j < n; j++)
        {
            if((d2[j]-d2[i])/(j-i) > dic)
            {
                ans_back[i]++;
                dic = (d2[j]-d2[i])/(j-i);
            }
        }
    }
    int k = d1.size()-1;
    for(int i = 0; i < d1.size(); i++)
    {
        ans[i] += ans_back[k];
        k--;
    }
    sort(ans,ans+n,greater<int>());
    cout << ans[0] << endl;

}