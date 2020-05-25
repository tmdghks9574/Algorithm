#include <iostream>
#include<vector>
using namespace std;
int arr[100];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    bool check = true;
    int r = 0 , d = 0;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
   if(n == 1)
       cout << "A\n";
   else if(n == 2)
   {
       if(arr[0] == arr[1])
           cout << arr[0] << endl;
       else
           cout << "A\n";
   }
   else
   {
       for(int i = 0; i < n-2; i++) {
           int a = arr[i];
           int b = arr[i + 1];
           int c = arr[i + 2];
           if (b - a == 0) {
               r = 0;
               d = b - a * r;
           } else {
               r = (c - b) / (b - a);
               d = b - a * r;
           }
       }
       for(int i = 0; i < n-1; i++)
       {
           if(arr[i] * r + d == arr[i+1])
               continue;
           else
               check = false;
       }
       if(check)
           cout << arr[n-1] * r + d << endl;
       else
           cout << "B\n";
   }
}
