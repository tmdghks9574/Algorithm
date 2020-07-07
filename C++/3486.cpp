#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int sum = stoi(s1) + stoi(s2);
        string s3;
        s3 = to_string(sum);
        reverse(s3.begin(),s3.end());
        cout << stoi(s3) << endl;
    }
}