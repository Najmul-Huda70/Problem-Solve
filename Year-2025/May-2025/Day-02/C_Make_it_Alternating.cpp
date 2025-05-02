// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(altr_) altr_.begin(), altr_.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_maaltr_(v) maaltr__element(all(v));
#define vec_minmaaltr_(v) minmaaltr__element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 2e5 + 9;
const ll mod = 998244353, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << '\n';
}
/*
 auto p = vec_minmaaltr_(a);
        int maltr__a = *p.second;
        int mn_a = *p.first;
*/
vector<ll> fact(N);
void factorial()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        (fact[i] = i * fact[i - 1]) %= mod;
}
void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    ll cnt = 1;
    ll ans = 1;
    int altr_ = 1;

    char current = s[0];

    for (int i = 1; i < n; i++)
    {
        if (current != s[i])
        {
            (ans *= cnt) %= mod;

            altr_++;
            cnt = 1;
        }
        else
            cnt++;

        current = s[i];
    }

    (ans *= cnt) %= mod;
    (ans *= fact[n - altr_]) %= mod;

    cout << n - altr_ << " " << ans << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    factorial();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}