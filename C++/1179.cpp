#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll yose(ll n, int k) {
    if (n == 1)
        return 0;
    if (k == 1)
        return n - 1;
    if (k <= n)
    {
        ll n_prime = n - n / k;
        ll ret = yose(n_prime, k) - n % k;
        if (ret < 0)
            ret += n_prime;
        return (k * (ret % n_prime)) / (k - 1);
    }
    else {
        return (yose(n - 1, k) + k) % n;
    }
}

int main() {
    ll n, k;
    cin >> n >> k;
    cout << yose(n, k) + 1;
}
