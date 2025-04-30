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
#define vec_minmax(v) min_element(all(v));
#define vec_minmax(v) max_element(all(v));
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    FOR(i, 0, n - 1)
    cin >> a[i];
    vi b(n);
    FOR(i, 0, n - 1)
    cin >> b[i];
    set<int> st;
    FOR(i, 0, n - 1)
    {
        if (a[i] >= 0 && b[i] >= 0)
            st.insert(a[i] + b[i]);
    }
    if (st.size() > 1)
    {
        cout << 0 << endl;
    }
    else if (st.size() == 1)
    {
        auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;

        if (mn_a + k >= *st.begin() && *st.begin() >= mx_a)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else
    {
        auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;
        cout << mn_a + k - mx_a + 1 << endl;
    }
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