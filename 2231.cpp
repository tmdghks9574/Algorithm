#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    bool a = false;
    int sum = 0;
    int k = 0;
    for(int i = 1; i <=n; i++)
    {
        sum = 0;
        int tmp = i;
        sum += tmp;
        while(tmp != 0)
        {
            sum += tmp % 10;
            tmp /= 10;
        }
        if(sum == n)
        {
            k = i;
            a = true;
            break;
        }
    }
    if(a)
        cout << k << endl;
    else
        cout << "0\n";
}
