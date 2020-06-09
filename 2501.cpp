#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,k; cin >> n >> k;
   vector<int> v;
   for(int i = 1; i <= n; i++)
   {
       if(n % i == 0)
           v.push_back(i);
   }
   if(v.size() < k)
       cout << "0\n";
   else
       cout << v[k-1] << endl;
}