#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<cmath>

using namespace std;

int main()
{
    deque<string> d;
    string s; cin >> s;
    d.push_back(s);
    cin >> s;
    d.push_back(s);
    bool a = false ,b = false;
    for(int i = 0; i < d[0].size(); i++)
    {
        if(d[0][i] == '1')
            a = true;
    }
    for(int i = 0; i < d[1].size(); i++)
    {
        if(d[1][i] == '1')
            b = true;
    }
    if(a == false && b == false)
    {
        cout << "0" << endl;
        return 0;
    }

    sort(d.begin(),d.end());
    reverse(d[0].begin(),d[0].end());
    reverse(d[1].begin(),d[1].end());
    for(int i = d[1].size()-1; i >= 0; i--)
    {
        if(d[1][i] == '0')
            d[1].pop_back();
        if(d[1][i] == '1')
            break;
    }
    for(int i = d[0].size(); i >= 0; i--)
    {
        if(d[0][i] == '0')
            d[0].pop_back();
        if(d[0][i] == '1')
            break;
    }
    int tmp = d[0].size();
    int tmp2 = d[1].size();
    int cmp = max(tmp2-tmp, tmp-tmp2);
    for(int i = 0; i < cmp; i++)
    {
        if(cmp == tmp2-tmp)
            d[0].push_back('0');
        else
            d[1].push_back('0');
    }
    d[1].push_back('0');
    d[0].push_back('0');
    reverse(d[0].begin(),d[0].end());
    reverse(d[1].begin(),d[1].end());
    tmp = d[0].size()-1;
    string s2;
    for(int i = tmp; i > 0 ; i--)
    {
        int a = d[0][i] -'0';
        int b = d[1][i] -'0';
        a += b;
        if(a > 1)
        {
            a -= 2;
            d[0][i-1]++;
            string s3 = to_string(a);
            s2 += s3;
            s3.clear();
        }
        else
        {
            string s3 = to_string(a);
            s2 += s3;
            s3.clear();
        }
    }
    s2 += d[0][0];
    reverse(s2.begin(),s2.end());
    if(s2[0] == '0')
    {
        for(int i = 1; i < s2.size(); i++)
            cout << s2[i];
        cout << endl;
    }
    else
        cout << s2 << endl;
}