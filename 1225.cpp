#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    long long int sum1 = 0, sum2 = 0;
    for(int i = 0; i < s1.size(); i++)
    {
        string s3;
        s3 = s1[i];
        sum1 += stoi(s3);
        s3.clear();
    }
    for(int i = 0; i < s2.size(); i++)
    {
        string s3;
        s3 = s2[i];
        sum2 += stoi(s3);
        s3.clear();
    }
    cout << sum1 * sum2 << endl;
}
