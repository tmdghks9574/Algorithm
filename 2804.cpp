#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    char arr[31][31];
    int cnt = 0;
    for(int i = 0; i < 31; i++)
    {
        for(int j = 0; j < 31; j++)
        {
            arr[i][j] = '.';
        }
    }
    int c,d;
    for(int i = 0; i < s1.size(); i++)
    {
        if(cnt == 1)
            break;
        for(int j = 0; j < s2.size(); j++)
        {
            if(s1[i] == s2[j])
            {
                c = i;
                d = j;
                cnt = 1;
                break;
            }
        }
    }
    for(int k= 0; k < s1.size(); k++)
    {
        arr[d][k] = s1[k];
    }
    for(int k = 0; k < s2.size(); k++)
    {
        arr[k][c] = s2[k];
    }
    for(int i = 0; i < s2.size(); i++)
    {
        for(int j = 0; j < s1.size(); j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
