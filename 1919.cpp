#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int arr[26];
int arr2[26];

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++)
        arr[s1[i] -'a']++;
    for(int i = 0; i < s2.size(); i++)
        arr2[s2[i] -'a']++;
    int cnt = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] != arr2[i])
        {
            cnt += abs(arr[i] - arr2[i]);
        }
        else
            continue;
    }
    cout << cnt << endl;
}

