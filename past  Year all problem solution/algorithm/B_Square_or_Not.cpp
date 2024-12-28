/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 9;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7, inf = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int sqr_n = sqrt(n);
        if (n != sqr_n * sqr_n) {
            cout << "No" << endl;
        } else {
            bool ans = true;
            // Check the first row
            for (int i = 0; i < sqr_n; i++) {
                if (s[i] != '1') {
                    ans = false;
                    break;
                }
            }

            // Check the last row
            for (int i = n - 1; i >= n - sqr_n; i--) {
                if (s[i] != '1') {
                    ans = false;
                    break;
                }
            }

            // Check the middle rows
            for (int i = sqr_n; i < n - sqr_n; i += sqr_n) {
                int last = i + (sqr_n - 1);
                if (s[i] != '1' || s[last] != '1') {
                    ans = false;
                    break;
                }

                // Check that all inner characters are '0'
                for (int j = i + 1; j < last; j++) {
                    if (s[j] != '0') {
                        ans = false;
                        break;
                    }
                }

                if (!ans) break;
            }

            cout << (ans ? "Yes" : "No") << endl;
        }
    }

    return 0;
}
