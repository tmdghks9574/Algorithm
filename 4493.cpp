#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        int sum1 = 0, sum2 = 0;
        int a; cin >> a;
        while(a--)
        {
            string s1,s2; 
            cin >> s1 >> s2;
            if(s1 == s2)
                continue;
            else if(s1 == "S" && s2 == "R")
                sum2++;
            else if(s1 == "S" && s2 == "P")
                sum1++;
            else if(s1 == "P" && s2 == "S")
                sum2++;
            else if(s1 == "P" && s2 == "R")
                sum1++;
            else if(s1 == "R" && s2 == "P")
                sum2++;
            else if(s1 == "R" && s2 == "S")
                sum1++;
        }
        if(sum1 > sum2)
            cout << "Player 1\n";
        else if(sum1 < sum2)
            cout << "Player 2\n";
        else
            cout << "TIE\n";
    }
}