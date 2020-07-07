#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

char arr[51][51];
char c[8][8];
char d[8][8];
int cnt1[5000];
int cnt2[5000];
int main()
{
    int g = 0;
    string s = "WBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBW";
    string s2 = "BWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWBBWBWBWBWWBWBWBWB";
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            c[i][j] = s[g];
            d[i][j] = s2[g];
            g++;
        }
    }
    int q = 0, w = 0, e = 0;
    int a,b; cin >> a >> b;
    for(int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cin >> arr[i][j];
    }
    for(int i = 0; i < a-7; i++)
    {
        for(int j = 0; j < b-7; j++)
        {
            q = 0;
            for(int k = i; k < i+8; k++)
            {
                w = 0;
                for(int l = j; l < j+8; l++)
                {
                    if(arr[k][l] != c[q][w])
                        cnt1[e]++;
                    if(arr[k][l] != d[q][w])
                        cnt2[e]++;
                    w++;
                }
                q++;
            }
            if(cnt1[e] == 0 || cnt2[e] == 0)
            {
                cout << "0\n";
                return 0;
            }
            e++;
        }
    }
    sort(cnt1,cnt1+e);
    sort(cnt2,cnt2+e);
    cout << min(cnt1[0] , cnt2[0]);
}