// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (ll i = 1; i <= (k % 2 == 0 ? min(k, 10 * 1LL) : min(k, 11 * 1LL)); i++)
    {
        // first time
        vi a(n, 0);

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == '1' and s[i + 1] == '1')
            {
                a[i] = 1;
                // i++;
            }
        }

        string ans = s;

        for (int i = 0; i < n; i++)
        {
            if (a[i])
                ans[i] = (ans[i] == '1' ? '0' : '1');
        }
        s = ans;
    }
    cout << s << endl;
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