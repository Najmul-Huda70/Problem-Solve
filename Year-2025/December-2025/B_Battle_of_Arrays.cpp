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

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    map<int, int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    int A[n];
    int i = 0;
    for (auto [v, _] : a)
    {
        A[i] = v;
        i++;
    }
    i = 0;
    int B[m];
    for (auto [v, _] : b)
    {
        B[i] = v;
        i++;
    }
    stack<int> st_a, st_b;
    for (int x = n - 1; x >= 0; x--)
    {
        for (int y = m - 1; y >= 0; y--)
        {
        }
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