#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long

bool check[10];
int ans[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int cur = 100;
    fill(check, check + 10, true);
    for (int i = 0; i < b; i++) {
        int c;
        cin >> c;
        check[c] = false;
    }
    if (b == 10) {
        cout << abs(a - cur) << endl;
        return 0;
    }
    if (a == cur) {
        cout << "0\n";
        return 0;
    }
    int cnt = 0;
    int cur_cnt = abs(a - cur);
    ans[0] = 999999999;
    for (int i = 0; i <= 1000000; i++) {
        cnt = 0;
        bool cmp = true;
        int tmp = i, tmp2 = i;
        while (tmp2 >= 0) {
            int k = tmp2 % 10;
            if (!check[k])
            {
                cmp = false;
                break;
            }
            else if(i == 0 && check[i])
            {
                cnt++;
                tmp2--;
            }
            else if(tmp2 == 0)
                tmp2--;
            else
            {
                cnt++;
                tmp2 /= 10;
                if(tmp2 == 0)
                    break;
            }
        }
        if (cmp) {
            ans[i] = (min(abs(a - tmp) + cnt, cur_cnt));
        }
    }
    int q = 10000000, w = 10000000;
    for (int i = a; i >= 0; i--) {
        if (ans[i] != 0 && ans[i] != 999999999) {
            q = ans[i];
            break;
        }
    }
    for (int i = a; i <= 1000000; i++) {
        if (ans[i] != 0 && ans[i] != 999999999) {
            w = ans[i];
            break;
        }
    }
    cout << min(q, w) << endl;

}
