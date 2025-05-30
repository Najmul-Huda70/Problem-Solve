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
bool sorted(vector<int> &a, int l, int r)
{
    FOR(i, l, r - 1)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
void solve()
{
    int n, ans = 0;
    cin >> n;

    vi a(n + 1), A(n + 1);
    // array a[n]
    FOR(i, 1, n)
    cin >> a[i];
    // [l,r] sorted subarray
    FOR(i, 1, n)
    cin >> A[i];

    int l = 1, r = 1;
    int x = 1, y = 1;
    vector<pair<int, int>> lr;
    bool srt = false;
    for (int i = 2; i <= n;)
    {
        while (i - 1 > 0 && i <= n && A[i - 1] <= A[i])
        {
            if (!srt)
            {
                l = i - 1;
                srt = true;
            }
            i++;
        }
        if (srt)
        {
            r = i - 1;
            srt = false;
        }
        else
        {
            l = 1, r = 1;
            i++;
        }
        if (r - l > 0)
            lr.push_back({l, r});
    }
    //  cout << lr.size() << endl;
    sort(all(lr), [](pair<int, int> &a, pair<int, int> &b)
         { return (a.second - a.first) > (b.second - b.first); });
    for (auto [l, r] : lr)
    {
        if (!sorted(a, l, r))
        {
            cout << l << " " << r << endl;
            return;
        }
    }
    // for (auto [a, b] : lr)
    //     cout << a << " " << b << endl;
    // cout << endl;
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