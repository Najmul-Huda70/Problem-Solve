// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void solve()
{
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k; // 3 4 7
        cin >> n >> m >> k;

        for (int i = 2; i < m / 2; i++)
        {
            ll d = (n * m * 1LL) / i; // 4
            d *= i - 1;               // 9
            if (m % i != 0)
                d += (i - 1) * n; // d=6
            if (d >= k)
            {
                cout << i - 1 << endl;
                break;
            }
        }

        // if (n * m * 1LL >= k)
        // {
        //     cout << m << endl;
        // }

        // cout << endl;
    }
    return 0;
}