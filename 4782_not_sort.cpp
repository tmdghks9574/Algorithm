#include<bits/stdc++.h>

using namespace std;
#define ld long double
#define ll long long
int main()
{
    while(1)
    {
        ld b, n;
        cin >> b >> n;
        if (b == 0 && n == 0)
            return 0;
        string ans;
        int a = 0;
        ans += to_string(a);
        ans += "/";
        ans += to_string(2 * (int) n);
        ans += " ";
        for (a = 1; a < (int) b; a++)
        {
            if(sqrt(b*b - b*a) == (int)sqrt(b*b - b*a))
            {
                ans += to_string(a);
                ans += "/";
                ans += to_string((int)n+((int)n*(int)sqrt(b*b-a*b))/(int)b);
                ans += " ";
                ans += to_string(a);
                ans += "/";
                ans += to_string((int)n-((int)n*(int)sqrt(b*b-a*b))/(int)b);
                ans += " ";
            }
        }
        cout << ans << endl;
    }
}