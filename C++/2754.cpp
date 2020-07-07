#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
        if(s == "A+")
            cout << "4.3\n";
        else if(s == "A0")
            cout << "4.0\n";
        else if (s =="A-" )
            cout << "3.7\n";
        else if (s =="B+" )
            cout << "3.3\n";
        else if (s == "B0" )
            cout << "3.0\n";
        else if (s == "B-" )
            cout << "2.7\n";
        else if (s == "C+" )
            cout << "2.3\n";
        else if (s == "C0" )
            cout << "2.0\n";
        else if (s == "C-" )
            cout << "1.7\n";
        else if (s == "D+" )
            cout << "1.3\n";
        else if (s == "D0" )
            cout << "1.0\n";
        else if (s == "D-" )
            cout << "0.7\n";
        else if (s == "F" )
            cout << "0.0\n";
}
