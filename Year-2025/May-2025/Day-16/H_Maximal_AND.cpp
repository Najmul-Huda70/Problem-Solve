// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_max(v) max_element(all(v));
#define vec_minmax(v) minmax_element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
/*
 auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;
*/
void solve()
{
    int n, k;
    cin >> n >> k;

    vs arr(n + 1, string(31, '0'));
    FOR(i, 1, n)
    {
        int val;
        cin >> val;
        ROF(j, 30, 0)
        {
            ll p2j = pow(2, j);
            if (val >= p2j)
            {
                arr[i][j] = '1';
                val %= p2j;
            }
        }
    }

    vi v(31, 0);
    FOR(i, 1, n)
    {
        FOR(j, 0, 30)
        {
            if (arr[i][j] == '1')
                v[j]++;
        }
    }
    // FOR(i, 0, 30)
    //     cout << i << " --> " << v[i] << endl;
    ll ans = 0;
    ROF(j, 30, 0)
    {
        int dist = n - v[j];
        if (dist <= k)
        {
            k -= dist;
            ans += pow(2, j);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}