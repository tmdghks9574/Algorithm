#include<iostream>
#include<cmath>
using namespace std;
int two(int n)
{
    int t_cnt = 0;
    while(n)
    {
        t_cnt += n / 2;
        n /= 2;
    }
    return t_cnt;
}
int five(int n)
{
    int t_cnt = 0;
    while(n)
    {
        t_cnt += n / 5;
        n /= 5;
    }
    return t_cnt;
}
int main()
{
    int a; cin >> a;
    cout << min(two(a),five(a)) << endl;
}
