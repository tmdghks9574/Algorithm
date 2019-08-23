#include<iostream>
#include<cstring>
#include<stack>
#include<cstdio>
using namespace std;
int arr2[100001];
int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        scanf("%d",&arr2[i]);

    string ans;
    stack<int> s; s.push(-1);
    int i = 0, j = 1;
    while(1)
    {
        if(s.top() == arr2[j])
        {
            s.pop();
            ans += '-';
            j++;
        }
        else
        {
            s.push(++i);
            ans += '+';
        }
        if(s.top() > n)
            break;
    }
    s.pop();
    if(s.top() == -1) 
        for(int k = 0; k < ans.length()-1; k++)
            printf("%c\n",ans[k]);
    else
        cout << "NO\n";
}
