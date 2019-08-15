#include<iostream>
#include<cstring>
using namespace std;
int arr[26];
char arr2[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
    int n; cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < 26; i++)
        {
            if(s[0] == arr2[i])
                arr[i]++;
        }
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] >= 5)
        {
            cnt++;
            cout << arr2[i];
        }
    }
    if(cnt == 0)
        cout << "PREDAJA\n";
    else
        cout << endl;
}
