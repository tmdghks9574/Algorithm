#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
    stack<char> s;
    s.push('a');
    string str;
    int sum1 = 0, sum2 = 0, sum = 0;
    int cnt1 = 0, cnt2 = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '(')
            cnt1++;
        else if(str[i] == '[')
            cnt2++;
        else if(str[i] == ']')
            cnt2--;
        else if(str[i] == ')')
            cnt1--;
    }
    if(cnt1 != 0 || cnt2 != 0)
    {
        cout << "0" << endl;
        return 0;
    }
    else
    {
        cnt1 = -1, cnt2 = -1;
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                s.push('(');
                ++cnt1;
            }
            else if(str[i] == '[')
            {
                s.push('[');
                ++cnt2;
            }
            else if(str[i] == ')' && cnt1 != 1)
            {
                sum1 += 2;
// -2 -2 2 -3 -3 3 3 2 -2 -3 3 2
// 2*  2+  3*  3+     2+   3+  





