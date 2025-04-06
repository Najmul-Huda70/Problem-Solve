// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.rbegin(), x.rend()
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
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        FOR(i, 0, n - 1)
        {
            cin >> a[i];
        }
        FOR(i, 0, n - 1)
        {
            cin >> b[i];
        }
        vector<int> v(n, 0);

        ll min_op = 0;
        for (int i = 0; i < n; i++)
        {
            int mn = min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
            if (mn == 0)
                v[i] = 9;
            else
                v[i] = 9 - 2 * mn;
            min_op += mn;
        }
        ll diff = k - min_op;
        if (diff < 0)
            cout << "No" << endl;
        else if (diff % 2 == 0)
            cout << "Yes" << endl;
        else
        {
            bool flag = false;

            for (int i = 0; i < n; i++)
            {
                if (diff >= v[i])
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                cout << "Yes" << endl;
            else

            {

                cout << "No" << endl;
            }
        }
    }
    return 0;
}