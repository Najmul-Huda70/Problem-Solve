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
int cs = 0;

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    a[0] = 0;
    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] a[i + 1])
            flag = false;
    }
    if (flag)
    {
        cout << "Case " << ++cs << ": " << 1 << endl;
        return;
    }
    int pre_max[n + 1], suf_min[n + 1];
    pre_max[0] = INT_MIN;
    suf_min[0] = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        pre_max[i] = max(pre_max[i - 1], a[i]);
    }
    suf_min[n] = a[n];
    for (int i = n - 1; i > 0; i--)
    {
        suf_min[i] = min(a[i], suf_min[i + 1]);
    }
    vector<int> v;
    for (int i = n; i > 0; i--)
    {
        v.push_back(suf_min[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        cout << pre_max[i] << " ";
    }
    cout << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << suf_min[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (pre_max[i] >= v[i - 1] and mp[a[i]] == 1)
        {
            ans = i;
            break;
        }
    }
    if (ans > 0)
        cout << "Case " << ++cs << ": " << ans << endl;
    else
        cout << "Case " << ++cs << ": " << "Humanity is doomed!" << endl;
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