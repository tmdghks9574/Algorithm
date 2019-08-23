#include<iostream>
#include<algorithm>
using namespace std;

int arr[100001];
int arr2[100001];

void bs(int ar[],int left, int right, int value)
{
    int mid = (left+right)/2;
    if(left > right)
    {
        cout << "0" << endl;
    }
    else if(ar[mid] < value)
    {
        left = mid+1;
        bs(ar,left,right,value);
    }
    else if(ar[mid] > value)
    {
        right = mid-1;
        bs(ar,left,right,value);
    }
    else
        cout << "1" << endl;
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr,arr+n);

    int m; cin >> m;
    for(int i = 0; i < m; i++)
        cin >> arr2[i];
    
    
    for(int i = 0; i < m; i++)
    {
        int left = 0;
        int right = n-1;
        int value = arr2[i];
        bs(arr,left,right,value);
    }
}

