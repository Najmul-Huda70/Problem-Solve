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

    vector<int> arr(n + 1);

    FOR(i, 1, n)
    cin >> arr[i];
    ll sum = 0;
    int weaks = n - k + 1;
    FOR(i, 1, n)
    {
        if (i >= min(k, weaks) && i <= n - min(k, weaks) + 1)
        {
            sum += 1LL * min(k, weaks) * arr[i];
        }
        else if (i < min(k, weaks))
        {

            sum += 1LL * i * arr[i];
        }
        else
        {

            sum += 1LL * (n - i + 1) * arr[i];
        }
    }

    // average total sum/total weak
    double ans = (double)sum / (double)weaks;
    // cout << ans << endl;
    printf("%.10lf", ans);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}