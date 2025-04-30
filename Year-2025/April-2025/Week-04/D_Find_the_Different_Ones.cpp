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
    vi a(n + 1);
    FOR(i, 1, n)
    cin >> a[i];
    vector<map<int, int>> v(n + 1);
    FOR(i, 1, n)
    {
        v[i][a[i]] = i;
        if (i - 1 >= 1)
        {
            int mx_idx = INT_MIN;
            for (auto [val, idx] : v[i - 1])
            {
                if (v[i].size() >= 2)
                    break;
                if (v[i].find(val) != v[i].end())
                    continue;
                if (idx > mx_idx)
                    mx_idx = idx;
            }
            for (auto [val, idx] : v[i - 1])
            {
                if (idx == mx_idx)
                {
                    v[i][val] = idx;
                }
            }
        }
    }
    // FOR(i, 1, n)
    // {
    //     cout << "index - " << i << endl;
    //     for (auto [val, idx] : v[i])
    //     {
    //         cout << "{" << val << "," << idx << "},";
    //     }
    //     cout << endl;
    // }
    // query
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        bool flag = true;

        for (auto [val, idx] : v[r])
        {
            if (!(l <= idx && idx <= r))
                flag = false;
        }
        if (flag && v[r].size() == 2)
        {
            for (auto [val, idx] : v[r])
                cout << idx << " ";
            cout << endl;
        }
        else
            cout << "-1 -1" << endl;
    }
    cout << endl;
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