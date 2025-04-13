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
#define VEC_SUM(arr, Total_Sum) \
    ll sum = 0;                 \
    for (auto val : arr)        \
        Total_Sum += val;
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
    int n, k;
    cin >> n >> k;
    vi arr(n);
    FOR(i, 0, n - 1)
    cin >> arr[i];
    stable_sort(all(arr));
    bool flag = false;
    FOR(i, 0, n - 1)
    {
        int to_find = arr[i] + k;

        // binary search
        if (binary_search(arr.begin() + i + 1, arr.end(), to_find))
        {
            flag = true;
            break;
        }
    }
    condition(flag);
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