#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    string s2;
    int n; cin >> n;
    s2 += to_string(n);
    for(int i = 1; i <= n; i++)
    {
        s1 += to_string(i);
    }
    int pos = s1.find(s2);
    cout << pos+1 << endl;
    int s = s1.size();
    cout << s << endl;
}

