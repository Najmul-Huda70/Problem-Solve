// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void solve(ll n, ll x)
{
    if (n == 1)
    {
        cout << x << endl;
        return;
    }
    vl v;
    ll sum = 0;
    v.push_back(0);
    bool flag = true;
    for (int val = 1; val <= n - 2; val++)
    {
        for (int i = 0; i < 32; i++)
        {
            if ((1LL << i) & val)
            {
                if ((1LL << i) & x)
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            sum = sum | val;
            v.push_back(val);
        }
        else
        {
            v.push_back(0);
        }
    }

    // jodi n-1 | sum == x
    if (((n - 1) | sum) == x)
        v.push_back(n - 1);
    else if (sum < x)
        v.push_back(x - sum);
    else
        v.push_back(0);

    // print
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
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
        ll n, x;
        cin >> n >> x;
        solve(n, x);
    }
    return 0;
}
