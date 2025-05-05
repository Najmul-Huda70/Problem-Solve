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
ll maximum_K_Element_consecutive_sum(vi array, int n, int k)
{
    // optmal solution - slding window method
    ll sum = 0, mx = INT_MIN;
    FOR(i, 0, k - 1)
    {
        sum += array[i];
    }

    mx = max(sum, mx);

    FOR(i, k, n - 1)
    {

        sum += array[i] - array[i - k];
        mx = max(sum, mx);
    }
    return mx;
}
ll minimum_K_Element_consecutive_sum(vi array, int n, int k)
{
    // optmal solution - slding window method
    ll sum = 0, mn = INT_MAX;
    FOR(i, 0, k - 1)
    {
        sum += array[i];
    }

    mn = min(sum, mn);

    FOR(i, k, n - 1)
    {

        sum += array[i] - array[i - k];
        mn = min(sum, mn);
    }
    return mn;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    FOR(i, 0, n - 1)
    cin >> a[i];
    cout << "max_Sum_K = " << maximum_K_Element_consecutive_sum(a, n, k) << endl;
    cout << "min_sum_K = " << minimum_K_Element_consecutive_sum(a, n, k) << endl;
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
        solve();
    }
    return 0;
}