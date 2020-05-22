#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        regex reg("(100+1+|01)+");
        if(regex_match(s, reg))
            cout <<"YES\n";
        else
            cout << "NO\n";
    }
}
