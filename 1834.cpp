#include<iostream>

using namespace std;

int main()
{
    long long int num;
    cin >> num;
    long long int sum = 0;                                                                                                                                                 

    for(int i = 1; i < num; i++)
    {
        sum += (num*i) + i;
    }
    cout << sum << endl;
}
