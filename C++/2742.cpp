#include<iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = a;

    for(int i = 1; i<=a; i++)
    {
        cout << b << "\n";
        b--;                                                                    
    }
    return 0;
}
