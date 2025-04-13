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
    vl arr(n);
    ll mn = INT_MAX;
    ll mx = INT_MIN;
    unordered_set<ll> diffrent_value;
    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
        diffrent_value.insert(arr[i]);
    }

    // if mx is not find in array
    if (diffrent_value.find(2 * mx) == diffrent_value.end())
        cout << mx << " " << mx << endl;
    // if mn is not find in array
    else if (diffrent_value.find(2 * mn) == diffrent_value.end())
        cout << mn << " " << mn << endl;
    else
    {
        bool flag = false;
        int limit = min(n - 1, 100);
        // if 10^3 * 10^3 ckeck this condition
        FOR(i, 0, limit)
        {
            FOR(j, 0, limit)
            {
                ll X = arr[i] + arr[j];
                if (diffrent_value.find(X) == diffrent_value.end())
                {
                    cout << arr[i] << " " << arr[j] << endl;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << -1 << endl;
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