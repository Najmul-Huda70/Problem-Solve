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
#define MAXVAL(v) (*max_element(all(v)));
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
    ll b_si = n * (n - 1) / 2;
    vi b(b_si);
    map<int, int> mp;
    vi ans;
    FOR(i, 0, b_si - 1)
    {
        cin >> b[i];
        mp[b[i]]++;
    }
    if (mp.size() == n)
    {
        for (auto [val, cnt] : mp)
            cout << val << " ";
        cout << endl;
        return;
    }
    int k = n - 1; // 2 2 2 2 2 2 2 2 2 2  --> cnt = 10
    for (auto [val, cnt] : mp)
    {

        while (cnt > 0)
        {
            ans.push_back(val);
            cnt -= k; // cnt -=4,3,2,1 --> cnt = 6 ,3,1,0
            k--;      // k=4,3,2,1
        }
    }
    ans.push_back(1e9);
    print(ans);
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