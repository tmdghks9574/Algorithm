#include<iostream>
using namespace std;
int arr[4];
void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
int main()
{
    int n; cin >> n;
    arr[1] = 1;
    while(n--)
    {
        int a,b; cin >> a >> b;
        swap(arr[a],arr[b]);
    }
    for(int i = 1; i <= 3; i++)
    {
        if(arr[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }
}

