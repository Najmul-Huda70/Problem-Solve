// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (ll i = a; i <= b; ++i)
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
    ll n;
    cin >> n;
    vl arr(n + 1);
    map<ll, vl> mp;
    ll sum = 0;
    FOR(i, 1, n)
    {
        cin >> arr[i];
        sum += arr[i];
        mp[arr[i]].push_back(i);
    }
    set<ll> remove_index;
    FOR(i, 1, n)
    {
        ll find_val = sum - 1LL * (2 * arr[i]);
        if (find_val > 0 && (find_val == arr[i] ? mp[find_val].size() > 1 : mp[find_val].size() > 0))
        {

            for (auto idx : mp[find_val])
            {
                if (i != idx)
                    remove_index.insert(idx);
            }
        }
    }
    cout << remove_index.size() << endl;
    for (auto idx : remove_index)
    {
        cout << idx << " ";
    }
    cout << endl;
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