#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, P;
    cin >> S >> P;
    if (S == P) {
        cout << "1\n";
        return 0;
    }
    double prev = 0;
    int x = 2;
    while (1) {
        double cur = pow(1.0 * S / x, x);
        if (cur >= P) {
            cout << x << endl;
            return 0;
        } else if (cur < prev) {
            cout << "-1\n";
            return 0;
        }
        prev = cur, x++;
    }
}
