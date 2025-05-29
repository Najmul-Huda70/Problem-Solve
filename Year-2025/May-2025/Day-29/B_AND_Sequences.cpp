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
const ll mod = 1e9 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return 1LL * n * fact(n - 1) % mod;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    FOR(i, 0, n - 1)
    cin >> arr[i];

    // find minimum value
    int mn = *vec_min(arr);
    // cnt minimum value
    int cnt = 0;
    for (auto val : arr)
    {
        if (mn == val)
            cnt++;
        // if minimum value != mn & value -->  print 0 becuase no good  permutation
        if ((mn & val) != mn)
        {
            cout << 0 << endl;
            return;
        }
    }
    // permutation cnt
    /*
    index 0 1 2 3 4 5 6 7 8 9 10 11 12 13 .................. n-1
if array mn X X X X X X X X X X  x   X X ................... mn this permutaiton is good

so , (n-2)P(n-2) = (n-2)! and minimum count take first index cnt P 1  and last index (cnt-1) P 1

    */
    int ans = (1LL * fact(n - 2) * (1LL * cnt * (cnt - 1) % mod)) % mod;

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