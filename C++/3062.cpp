#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        string s1,s2,s3,s4;
        cin >> s1;
        s2 = s1;
        reverse(s2.begin(),s2.end());
        int a = stoi(s1);
        int b = stoi(s2);
        int c = a+b;
        s3 = to_string(c);
        s4 = s3;
        reverse(s4.begin(),s4.end());
        if(s3 == s4)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
