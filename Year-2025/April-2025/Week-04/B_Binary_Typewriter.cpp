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
ll typeWriter(string &s, int n)
{
    ll oparation = 0;
    bool button = false;
    FOR(i, 0, n - 1)
    {
        if ((s[i] == '0' && !button) || (s[i] == '1' && button))
            oparation++;
        else
        {
            button = !button;
            oparation += 2;
        }
    }
    return oparation;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = typeWriter(s, n);
    // reverse
    // take first e zerro

    int j = 0;
    while (s[j] == '0')
        j++;
    FOR(i, j, n - 1)
    {

        if (s[i] == '0')
        {
            while (s[i] == '0')
                i++;
            reverse(s.begin() + j, s.begin() + i);
            break;
        }
    }
    // cout << s << endl;
    ans = min(ans, typeWriter(s, n));
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