#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<char> s;
    string str; cin >> str;
    str += "$";
    string s2;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '+' || str[i] == '-')
        {
            if(s.empty())
                s.push(str[i]);
            else
            {
                while(!s.empty() && s.top() != '(')
                {
                    s2 += s.top();
                    s.pop();
                }               
                s.push(str[i]);
            }
        }
        else if(str[i] == '(')
            s.push(str[i]);
        else if(str[i] == '/' || str[i] == '*')
        {
            if(s.empty())
                s.push(str[i]);
            else
            {              
                if(!s.empty() && (s.top() == '/' || s.top() == '*'))
                {
                    s2 += s.top();
                    s.pop();
                    s.push(str[i]);
                }
                else
                    s.push(str[i]);
            }
        }
        else if(str[i] == ')')
        {
            while(!s.empty())
            {
                if(s.top() == '(')
                {
                    s.pop();
                    break;
                }
                else
                {
                    s2 += s.top();
                    s.pop();
                }
            }
        }
        else if(str[i] == '$')
        {
            while(!s.empty())
            {
                s2 += s.top();
                s.pop();
            }
            cout << s2 << endl;
            return 0;
        }
        else
            s2 += str[i];
    }
}