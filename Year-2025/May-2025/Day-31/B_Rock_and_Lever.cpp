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
/*
 auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;
*/
void solve()
{
    int n;
    ll ans = 0;
    cin >> n;

    // vector<int> arr(n);

    // brute force
    //  FOR(i, 0, n - 1)
    //  {
    //      FOR(j, i + 1, n - 1)
    //      {
    //          if ((arr[i] & arr[j]) >= (arr[i] ^ arr[j]))
    //          {
    //              ans++;
    //              // cout << arr[i] << " " << arr[j] << endl;
    //          }
    //      }
    //  }
    //  cout << ans << endl;

    // to create 32 bit binary number
    vector<string> ars(n, string(31, '0'));
    FOR(i, 0, n - 1)
    {
        ll val;
        cin >> val;
        ROF(j, 30, 0)
        {
            //   cout << j << endl;
            if (val == 0)
                break;
            ll pwr = 1 << j;
            if (val >= pwr)
            {
                ars[i][j] = '1';
                val -= pwr;
            }
        }
    }
    FOR(i, 0, n - 1)
    {
        reverse(all(ars[i]));
    }
    // FOR(i, 0, n - 1)
    // cout << ars[i] << endl;
    vb validity(n, true);
    FOR(I, 0, 30)
    {
        int cnt = 0;

        FOR(i, 0, n - 1)
        {

            if (validity[i] && ars[i][I] == '1')
            {
                validity[i] = false;
                cnt++;
            }
        }
        // 1+2+3+4+............................+(cnt-1) = cnt*(cnt-1)/2
        ans += 1LL * (1LL * cnt * (cnt - 1)) / 2;
    }
    cout << ans << endl;
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