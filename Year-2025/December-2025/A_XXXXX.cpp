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
    int n, x;
    cin >> n >> x;
    int a[n];
    long long s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] %= x;
        s = (s + a[i]) % x;
    }
    bool allZero = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            allZero = false;
            break;
        }
    }
    if (allZero or x == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (s == 0)
    {
        int b, e;
        for (b = 0; b < n; b++)
        {
            if (a[b] != 0)
                break;
        }
        for (e = n - 1; e >= 0; e--)
        {
            if (a[e] != 0)
            {
                break;
            }
        }
        b++;
        e++;
        // cout << b << " " << n - e + 1 << endl;
        cout << n - min(b, n - e + 1) << endl;
    }
    else
        cout << n << endl;
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