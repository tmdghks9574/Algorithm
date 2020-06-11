#include<bits/stdc++.h>
using namespace std;

bool prime[1000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i = 2; i*i <= 1000000; i++)
    {
        if(!prime[i])
        {
            for(int j = i*i; j <= 1000000; j+=i)
                prime[j] = true;
        }
    }
    vector<int> v;
    set<int> s;
    for(int i = 2; i <= 1000000; i++)
    {
        if(!prime[i] && i % 2 == 1)
        {
            v.push_back(i);
            s.insert(i);
        }
    }
    while(1)
    {
        int a; cin >> a;
        if(a == 0)
            return 0;
        for(int i = 0; i < v.size(); i++)
        {
            int sum = v[i];
            bool check = true;
            sum = a - v[i];
            if(s.find(sum) != s.end())
            {
                cout << a << " = " << v[i] << " + " << sum << "\n";
                check = false;
                break;
            }
        }
    }
}