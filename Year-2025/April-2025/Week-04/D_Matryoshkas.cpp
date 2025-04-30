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
    int n;
    cin >> n;
    vi arr(n);
    map<int, int> mp;

    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    ll ans = 0;

    while (!mp.empty())
    {
        auto it = mp.begin();
        int prev = it->first;
        int mn = it->second;
        vector<int> sets = {prev};

        ++it;
        while (it != mp.end() && it->first == prev + 1)
        {
            mn = min(mn, it->second);
            prev = it->first;
            sets.push_back(prev);
            ++it;
        }

        // Subtract mn from all in the group
        for (int val : sets)
        {
            mp[val] -= mn;
            if (mp[val] == 0)
                mp.erase(val);
        }

        ans += mn;
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