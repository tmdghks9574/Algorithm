#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<vector<ll> > matrix;

matrix operator * (const matrix &a, const matrix &b) {
    ll size = a.size();
    matrix res(size, vector<ll>(size));
    for (ll i = 0; i < size; i++) {
        for (ll j = 0; j < size; j++) {
            for (ll k = 0; k < size; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            res[i][j] %= 1000;
        }
    }
    return res;
}

matrix power(matrix a, ll n) {
    ll size = a.size();
    matrix res(size, vector<ll>(size));
    for (ll i = 0; i < size; i++) {
        res[i][i] = 1;
    }
    while (n > 0) {
        if (n % 2 == 1) {
            res = res * a;
        }
        n /= 2;
        a = a * a;
    }
    return res;

}


int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_case;
    cin >> test_case;
    for(int i=1; i<= test_case; i++){
        ll n;
        cin >> n;
        matrix a = { {6,-4}, {1, 0} };
        matrix res = power(a, n - 1);
        string ans = to_string((((28 * res[1][0] + 6 * res[1][1]) - 1) % 1000 + 1000) % 1000);
        ll size = ans.size();
        while (true) {
            if (size == 3) break;
            ans = "0" + ans;
            size++;

        }
        cout << "Case #" << i << ": " << ans << '\n';
    }


    return 0;
}