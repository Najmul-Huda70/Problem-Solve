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
        int x, y, k;
        cin >> x >> y >> k;
        int ans = -1;
        if (abs(x - y) == k)
        {
            cout << 0 << endl;
            continue;
        }
        else if (x % 2 == y % 2 && x + y >= k && k % 2 == 0) // 2 2 4
        {

            int abs_dif = abs(x - y);
            if (abs_dif > k)
            {
                ans = (abs_dif - k) / 2;
            }
            else
            {
                ans = (k - abs_dif) / 2;
            }
        }
        else if (x % 2 != y % 2 && x + y >= k && k % 2 == 1)
        {
            int abs_dif = abs(x - y);
            if (abs_dif > k)
            {
                ans = (abs_dif - k) / 2;
            }
            else
            {
                ans = (k - abs_dif) / 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}