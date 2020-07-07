#include <bits/stdc++.h>

#define ll long long
#define dd double
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        ll A, B, C, D;
        ll a,b,c;
        cout<<fixed;
        cout.precision(5);
        set<double> s;
        cin >> A >> B >> C >> D;
        if(D == 0)
            s.insert(0);
        else {
            for (int i = 1; i <= sqrt(abs(D)); i++)
            {
                if (D % i == 0)
                {
                    ll K = D / i;
                    if (A * i * i + B * i + C + D/i == 0)
                    {
                        s.insert((double) i);
                        break;
                    }
                    else if(A * K * K + B * K + C + D/K == 0)
                    {
                        s.insert((double) K);
                        break;
                    }
                    else if (A * i * i - B * i + C - D/i == 0)
                    {
                        s.insert((double) -i);
                        break;
                    }

                    else if (A * K * K - B * K + C - D/K == 0)
                    {
                        s.insert((double) -K);
                        break;
                    }

                }

            }
        }
        auto iter = s.begin();
        dd q = *iter;
        a = A; b = (A * q) + B;
        c = (A * q * q) + (B * q) + C;

        ll root_check = b * b - 4.0 * a * c;
        if (root_check < 0)
            cout << q << endl;
        else if (root_check == 0) {
            double middle_root = (double)(-b) / (double)(2.0 * a);
            if(middle_root == q)
                cout << q << endl;
            else
                cout << min(q,middle_root) << " " << max(q,middle_root) << endl;
        } else {
            s.insert((double)(-(double)b + sqrt(b*b - 4.0 * a * c)) / (double)(2.0 * a));
            s.insert((double)(-(double)b - sqrt(b*b - 4.0 * a * c)) / (double)(2.0 * a));
            for(iter = s.begin(); iter != s.end(); iter++)
                cout << *iter << " ";
            cout << endl;
        }
    }
}
