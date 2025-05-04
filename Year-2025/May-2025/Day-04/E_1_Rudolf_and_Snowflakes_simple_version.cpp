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

bool isPossible[N];
void valid()
{
    memset(isPossible, false, sizeof(isPossible));
    FOR(k, 2, N)
    {
        ll x = k * k;
        ll each_level_edge = 1 + k + x;
        if (each_level_edge > N)
            break;
        while (each_level_edge < N && each_level_edge > 0)
        {
            isPossible[each_level_edge] = true;
            x *= k;
            each_level_edge += x;
        }
    }
}
void solve()
{
    ll n;
    cin >> n;
    condition(isPossible[n]);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    valid();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}