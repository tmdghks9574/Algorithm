#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    stack<double> s;
    int n; cin >> n;
    string str; cin >> str;
    map<char,double> m;
    char tmp = 'A';
    while(n--)
    {
        double a; cin >> a;
        m.insert({tmp,a});
        tmp++;
    }
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            s.push(m[str[i]]);
        else if(str[i] == '*')
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(a*b);
        }
        else if(str[i] == '+')
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(a+b);
        }
        else if(str[i] == '-')
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(b-a);
        }
        else if(str[i] == '/')
        {
            double a = s.top();
            s.pop();
            double b = s.top();
            s.pop();
            s.push(b/a);
        }
    }
    printf("%.2f\n",s.top());
}