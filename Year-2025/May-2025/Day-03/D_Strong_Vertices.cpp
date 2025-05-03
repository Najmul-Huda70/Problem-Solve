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
    int n;
    cin >> n;
    vi a(n), b(n), c(n), ans;

    FOR(i, 0, n - 1)
    cin >> a[i];

    FOR(i, 0, n - 1)
    cin >> b[i];
    /*
         ai-aj>=bi-bj
         => ai-bi>= aj-bj
         c[i] = ai-bi
         find maximum in c
         collect all indexs where c[i] == maximum
    */
    // Compute c[i] = a[i] - b[i]
    FOR(i, 0, n - 1)
    c[i] = (a[i] - b[i]);

    // Find the maximum value in c
    int maximum = *vec_max(c);

    // Collect all indices where c[i] == maximum
    FOR(i, 0, n - 1)
    if (maximum == c[i])
        ans.push_back(i + 1);
    // print size
    cout << ans.size() << endl;
    // print ans
    print(ans);
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