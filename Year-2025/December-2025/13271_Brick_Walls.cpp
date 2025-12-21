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
bool flag = true;
void solve()
{
    int Sr, Sc, Dr, Dc;
    cin >> Sr >> Sc >> Dr >> Dc;
    // test case control
    if (Sr == 0 and Sc == 0 and Dr == 0 and Dc == 0)
    {
        flag = false;
        return;
    }
    // cout << Sr << " " << Sc << " " << Dr << " " << Dc << endl;
    ll ans = llabs(Sr - Dr) + llabs(Sc - Dc);
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (flag)
    {
        solve();
    }
    return 0;
}