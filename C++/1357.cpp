#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    string a,b; cin >> a >> b;
    reverse(a.begin(),a.end()) ,reverse(b.begin(),b.end());
    int sum = stoi(a) + stoi(b);
    string c = to_string(sum);
    reverse(c.begin(),c.end());
    cout << stoi(c) << endl;
}
