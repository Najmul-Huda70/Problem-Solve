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
const ll mod = 1e5 + 7, inf = 1000000000000LL + 1;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

void solve()
{
    int x;
    long long y, k;
    cin >> x >> y >> k;
    long long l = 1, r = inf;
    while (l <= r)
    {
        long long mid = l + (r - l) / 2;
        long long ost = mid - 1;
        for (int i = 0; i < x; i++)
        {
            ost -= ost / y;
        }
        if (ost + 1 > k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if (r == inf)
        cout << -1 << endl;
    else
        cout << r << endl;
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