#include<iostream>
using namespace std;

int b[6] = {1,1,2,2,2,8};
int a[6];
int main()
{
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5];
    for(int i = 0; i < 6; i++)
        cout << b[i] - a[i] << " ";
    cout << endl;
}

    
