#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    int n; cin >> n;
    while(n--)
    {
        bitset<32> bit;
        int a; cin >> a;
        bit = a;
        for(int i = 0; i < 32; i++)
        {
            if(bit[i] != 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
        
    }

}