#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            s[i] = toupper(s[i]);
        }
        else
            s[i] = tolower(s[i]);
    }
    cout <<s << endl;
}
