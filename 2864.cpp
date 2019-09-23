#include<iostream>
#include<cstdlib>
#include<cstring>
char aa[10];
char bb[10];
using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    for(int i = 0; i < a.length(); i++)
        aa[i] = a[i];
    for(int i = 0; i < b.length(); i++)
        bb[i] = b[i];
    for(int i = 0; i < strlen(aa); i++)
        if(aa[i] == '6')
            aa[i] = '5';
    for(int i = 0; i < strlen(bb); i++)
        if(bb[i] == '6')
            bb[i] = '5';

    cout  <<  atoi(aa)+atoi(bb) << " ";
    for(int i = 0; i < strlen(aa); i++)
        if(aa[i] == '5')
            aa[i] = '6';
    for(int i = 0; i < strlen(bb); i++)
        if(bb[i] == '5')
            bb[i] = '6';

    cout  <<  atoi(aa)+atoi(bb) << endl;
}

