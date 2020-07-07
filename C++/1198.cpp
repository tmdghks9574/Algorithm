#include <bits/stdc++.h>
using namespace std;

int x[35], y[35], ans;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                ans = max(ans, abs(x[i] * y[j] + x[j] * y[k] + x[k] * y[i] - x[j] * y[i] - x[k] * y[j] - x[i] * y[k]));
    if(ans % 2)
        printf("%d.5", ans / 2);
    else
        printf("%d", ans / 2);
    return 0;
}
