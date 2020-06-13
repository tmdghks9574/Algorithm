#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    while(1)
    {
        string s; cin >> s;
        if(s == "0")
            return 0;
        string s2;
        s2 = s;
        reverse(s.begin(),s.end());
        if(s2 == s)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}