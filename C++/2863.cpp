#include<iostream>

using namespace std;

double arr[5];
int main()
{
    int k = 1;
    double a,b,c,d; cin >> a >> b >> c >> d;
    arr[1] = a/d + b/d;
    arr[2] = c/d + a/b;
    arr[3] = d/b + c/a;
    arr[4] = b/a + d/c;
    double max = arr[1];
    
    for(int i = 2; i <= 4; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            k = i;
        }
    }
    cout << k-1 << endl;
}






