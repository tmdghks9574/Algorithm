#include<bits/stdc++.h>
using namespace std;
bool prime[1300000];

int main()
{
    for(int i = 2; i * i < 1300000; i++)
    {
        if(!prime[i])
        {
            for(int j = i*i; j < 1300000; j+=i)
                prime[j] = true;
        }
    }
    vector<int> v;
    for(int i = 2; i < 1300000; i++)
    {
        if(!prime[i])
            v.push_back(i);
    }
    int n; cin >> n;
    while(n--)
    {
        int a; cin >> a;
        if(!prime[a])
            cout << "0\n";
        else
        {
            int left = 0,right = 0;
            for(int i = 0; i < v.size(); i++)
            {
                if(v[i] > a)
                {
                    left = v[i-1];
                    right = v[i];
                    break;
                }
            }
            cout << right - left << endl;
        }
    }
}