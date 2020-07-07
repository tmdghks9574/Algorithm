#include<iostream>
#include<cstring>
using namespace std;

int arr[130];

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while(n--)
    {
        string s; cin >> s;
        arr[(int)s[0]]++;
        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == s[i-1])
                continue;
            else
                arr[(int)s[i]]++;
        }
        for(int i = 95; i <= 124; i++)
        {
            if(arr[i] > 1)
                break;
            if(i == 123)
                cnt++;
        }
        for(int i = 95; i <= 124; i++)
            arr[i] = 0;
    }
    cout << cnt << endl;
}


