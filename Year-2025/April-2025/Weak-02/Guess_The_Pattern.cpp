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
char getChar(int val)
{
    return 'A' + (val % 26);
}
void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    int k = n / 2;
    for (int i = 0; i < k; i++)
    {
        FOR(j, 0, k - 1)
        cout << " ";

        cout << getChar(i) << endl;
    }
    char mid = (char)('A' + k);
    int val = k;
    vi v;
    FOR(i, 0, k - 1)
    {
        val++;
        v.push_back(val);
    }
    reverse(all(v));
    FOR(j, 0, v.size() - 1)
    cout << getChar(v[j]);
    cout << mid;

    int temp = val;
    val += k;
    FOR(i, 0, k - 1)
    {
        val++;
        cout << getChar(val);
    }
    cout << endl;
    FOR(i, 0, k - 1)
    {
        temp++;
        FOR(J, 0, k - 1)
        cout << " ";
        cout << getChar(temp) << endl;
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