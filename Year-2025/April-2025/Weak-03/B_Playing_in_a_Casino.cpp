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
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    ll sum = 0;
    FOR(i, 0, n - 1)
    FOR(j, 0, m - 1)
    cin >> arr[i][j];
    // time complexity O(n^2*m)
    //  FOR(i, 0, n - 1)
    //  FOR(j, 0, m - 1)
    //  {
    //      FOR(k, i + 1, n - 1)
    //      {
    //          sum += abs(arr[i][j] - arr[k][j]);
    //      }
    //  }

    // TLE issue solve
    /*
        sort col[0] = [1,3,7]

        We want to calculate the sum of all absolute differences between pairs:

         ∣3−1∣+∣7−1∣+∣7−3∣=2+6+4=12

           ∣3−1∣ = 2
           ∣7−1∣+∣7−3∣ = 10

     prefix = 0

    i = 0 → sum += 1 * 0 - 0 = 0 → prefix = 1
    i = 1 → sum += 3 * 1 - 1 = 2 → prefix = 4
    i = 2 → sum += 7 * 2 - 4 = 10 → prefix = 11
    Total sum = 0 + 2 + 10 = 12


    */

    // time complexity O(nlogn)
    FOR(j, 0, m - 1)
    {
        vi col;
        FOR(i, 0, n - 1)
        {
            col.push_back(arr[i][j]);
        }
        sort(all(col));
        ll preffix = 0;
        FOR(i, 0, n - 1)
        {
            sum += 1LL * col[i] * i - preffix;
            preffix += col[i];
        }
    }
    cout << sum << endl;
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