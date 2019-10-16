#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int arr[3] = {0,};
    cin >> arr[0] >> arr[1] >> arr[2];
    string s; cin >> s;
    sort(arr,arr+3);
    for(int i = 0; i < 3; i++)
    {
        cout << arr[s[i]-'A'] << " ";
    }
    cout << endl;
}