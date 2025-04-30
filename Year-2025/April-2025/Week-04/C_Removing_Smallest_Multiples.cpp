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
const ll mod = 1e9 + 7, inf = 1e18;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    s = "@" + s; // 1-based indexing

    vi visited(n + 1, 0); // 0 = not visited, 1 = deleted, 2 = should keep

    FOR(i, 1, n)
    {
        if (s[i] == '1')
            visited[i] = 2;
    }

    ll ans = 0;
    FOR(i, 1, n)
    {
        for (int j = i; j <= n; j += i)
        {
            if (visited[j] == 0)
            {
                visited[j] = 1;
                ans += i;
            }
            else if (visited[j] == 2)
            {
                break;
            }
        }
    }

    cout << ans << endl;
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
