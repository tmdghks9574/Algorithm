#include<iostream>
#include<string>
using namespace std;
string arr[51];

int main()
{
    string s; int a; cin >> a;
    for(int i = 0; i < a; i++)
        cin >> arr[i];
    int tmp = 0;
    int k = 0;
    for(int j = 0; j < arr[0].size(); j++)
    {
        for(int i = 1; i < a; i++)
        {
            if(arr[0][j] == arr[i][j])
                tmp++;
        }
        if(tmp == a-1)
        {
            s += arr[0][j];
            tmp = 0;
        }
        else
        {
            s += '?';
            tmp = 0;
        }
    }
    cout << s << endl;
    cout << (1 << 5) << endl;
}
