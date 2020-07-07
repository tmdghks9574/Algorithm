#include<iostream>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    while(1)
    {
        string str;
        string s2;
        getline(cin,str,'.');
        getline(cin, s2);
        if(str.size() == 0)
            break;
        stack<char> s;
        s.push('a');
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
                s.push(str[i]);
            else if(str[i] == '[')
                s.push(str[i]);
            else if(str[i] == ')' && s.top() == '(')
                s.pop();
            else if(str[i] == ')' && s.top() != '(')
                s.push(str[i]);
            else if(str[i] == ']' && s.top() == '[')
                s.pop();
            else if(str[i] == ']' && s.top() != '[')
                s.push(str[i]);
        }
        if(s.top() == 'a')
            cout << "yes\n";
        else
            cout << "no\n";
    }
}