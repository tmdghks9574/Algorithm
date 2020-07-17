#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        int arr[10] = {0,};
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i] - '0']++;
        }
        int sum = 0;
        for(int i = 0; i < 10; i++)
        {
            if(arr[i] != 0)
                sum++;
        }
        cout << sum << endl;
    }
}