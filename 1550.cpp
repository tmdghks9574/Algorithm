#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{
    char *a = new char[7];
    cin >> a;
    cout << strtol(a,NULL,16) << endl;
}
