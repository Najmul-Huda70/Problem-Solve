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
vl arr(61);
vl prefixSum(61, 0);
void built()
{
    for (int i = 1; i < 61; i++)
    {
        arr[i] = (1LL << i);
    }
    for (int i = 1; i < 61; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    // odd ki na
    if (m % 2)
    {
        cout << -1 << endl;
        return;
    }
    vl cnt(61, 0);
    for (int i = 1; m > 0 and i < 61; i++)
    {
        ll p = n - n % 2;
        while (m > 0 and p > 0)
        {
            ll val = p * arr[i];
            if (m >= val)
            {
                m -= p * arr[i];
                if (m >= 0)
                    cnt[i] += p;
                else
                    m = 0;
                p = 0;
            }
            else
                p -= 2;
        }
    }
    // cout << "m: " << m << endl;
    ll ans = 0;
    if (m > 0)
    {
        for (ll i = 60; i > 0; i--)
        {
            if (m >= (1LL << i))
            {
                cnt[i]++;
                m -= (1LL << i);
            }
        }
    }
    for (int i = 1; i < 61; i++)
    {
        ans += cnt[i];
    }
    cout << (ans == 0 ? -1 : ans) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    built();
    while (t--)
    {
        solve();
    }
    return 0;
}