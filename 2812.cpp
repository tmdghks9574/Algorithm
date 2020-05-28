#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    string s; cin >> s;
    deque<char> dq;

    for (int i = 0; i < n; i++) {
        while(k && !dq.empty() && dq.back() < s[i]) {
            dq.pop_back();
            k--;
        }
        dq.push_back(s[i]);
    }
    for (int i = 0; i < dq.size() - k; i++)
        cout << dq[i];
    cout << endl;
}
