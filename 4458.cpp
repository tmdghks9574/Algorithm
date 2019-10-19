#include<string>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string s;
    string s1;
    int n; cin >> n;
    getline(cin,s1);
    fflush(stdin);
    for(int i = 0; i < n; i++)
    {
        getline(cin,s);
        fflush(stdin);
        if(s[0] >= 97)
            s[0] -= 32;
        for(int i = 0; i < s.size(); i++)
            cout << s[i];
        s.clear();
        cout << endl;
    }
}