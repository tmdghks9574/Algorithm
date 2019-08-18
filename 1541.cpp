#include<cstring>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string str2;
    stack<char> s;
    s.push('a');
    int sum2 = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            str2 += str[i];
        }
        else if(str[i] =='-' && s.top() != '-' && i != 0)
        {
            sum2 += stoi(str2);
            str2.clear();
            s.push(str[i]);
        }
        else if(str[i] == '-' && s.top() != '-')
        {
            s.push(str[i]);
            sum2 -= stoi(str2);
            cout << sum2 << endl;
            str2.clear();
        }
        else if(s.top() == '-' && str[i] == '+')
        {
            sum2 -= stoi(str2);
            str2.clear();
        }
        else if(s.top() == '-' && str[i] == '-')
        {
            sum2 -= stoi(str2);
            str2.clear();
        }
        else
        {
            sum2 += stoi(str2);
            str2.clear();
        }
    }
    if(s.top() == '-')
    {
        sum2 -= stoi(str2);
        str2.clear();
    }
    else
    {
        sum2  += stoi(str2);
        str2.clear();
    }
    cout << sum2 << endl;
}







