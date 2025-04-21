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
void solve()
{
    int n = 0;
    cin >> n;
    vector<int> inp;
    inp.assign(n, 0);
    for (auto &x : inp)
        cin >> x;
    sort(all(inp));
    if (inp.back() == inp[0])
    {
        cout << "-1\n";
        return;
    }
    else
    {
        int it = 0;
        while (inp[it] == inp[0])

            it++;
        cout << it << " " << n - it << "\n";
        FOR(j, 0, it - 1)
        cout << inp[j] << " ";
        FOR(j, it, n - 1)
        cout << inp[j] << " ";
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