#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    for(int i = 0; i < 2; i++)
    {
        string s;
        cin >> s;
        if(s == "black")
            s1 += "0";
        else if(s == "brown")
            s1 += "1";
        else if(s == "red")
            s1 += "2";
        else if(s == "orange")
            s1 += "3";
        else if(s == "yellow")
            s1 += "4";
        else if(s == "green")
            s1 += "5";
        else if(s == "blue")
            s1 += "6";
        else if(s == "violet")
            s1 += "7";
        else if(s == "grey")
            s1 += "8";
        else if(s == "white")
            s1 += "9";
    }
        string s;
        cin >> s;
        if(s == "black")
            s1 += "";
        else if(s == "brown")
            s1 += "0";
        else if(s == "red")
            s1 += "00";
        else if(s == "orange")
            s1 += "000";
        else if(s == "yellow")
            s1 += "0000";
        else if(s == "green")
            s1 += "00000";
        else if(s == "blue")
            s1 += "000000";
        else if(s == "violet")
            s1 += "0000000";
        else if(s == "grey")
            s1 += "00000000";
        else if(s == "white")
            s1 += "000000000";

        long long a;
        a = stod(s1);
        cout << a << endl;
}