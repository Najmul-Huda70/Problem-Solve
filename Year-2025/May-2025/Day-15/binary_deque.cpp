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
void solve()
{
    int n, s;
    cin >> n >> s;

    vi arr(n); 
    ll sum = 0;
    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum < s)
    {
        cout << -1 << endl;
        return;
    }
    if (sum == s)
    {
        cout << 0 << endl;
        return;
    }

    // Sliding window to find longest subarray with sum = s
    int maxLen = -1, S = 0, i = 0;
    FOR(j, 0, n - 1)
    {
        S += arr[j];
        while (S > s)
        {
            S -= arr[i++];
        }
        if (S == s)
        {
            maxLen = max(maxLen, j - i + 1);
        }
    }

    cout << n - maxLen << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
