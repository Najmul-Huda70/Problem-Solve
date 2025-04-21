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
    FOR(i, 0, n - 1)
    cin >> arr[i];

    int ans = 1, i = 0;
    while (i < n - 1) // 1 3 3 3 7
    {

        if (arr[i] > arr[i + 1])
        {
            ans++;
            while (i + 1 < n && arr[i] >= arr[i + 1])
                i++;
        }
        else if (i + 1 < n && arr[i] < arr[i + 1]) // 1 3 3 3 7
        {
            ans++; // ans=2
            while (arr[i] <= arr[i + 1])
                i++;
        }
        else
            i++;
    }
    cout << (ans ? ans : 1) << endl;
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