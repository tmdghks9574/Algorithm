#include<iostream>
using namespace std;
int arr[21];

int main()
{
    int n; cin >> n;
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 += (arr[i] / 30 + 1) * 10;
        sum2 += (arr[i] / 60 + 1) * 15;
    }
    if(sum1 > sum2)
        cout << "M " << sum2 << endl;
    else if(sum1 == sum2)
        cout << "Y M " << sum1 << endl;
    else
        cout << "Y " << sum1 << endl;
}


