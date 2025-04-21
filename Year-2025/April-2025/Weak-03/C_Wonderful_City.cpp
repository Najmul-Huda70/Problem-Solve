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
const int N = 1e3 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

bool beatiful(ll arr[][N], int n)
{
    // row
    FOR(i, 0, n - 1)
    {
        // col
        FOR(j, 0, n - 1)
        {
            if (i + 1 < n && arr[i][j] == arr[i + 1][j])
            {
                return false;
            }
            if (j + 1 < n && arr[i][j] == arr[i][j + 1])
            {
                return false;
            }
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    ll arr[n][n], a[n][n], b[n][n], c[n][n];

    // gird input nilam
    FOR(i, 0, n - 1)
    {
        FOR(j, 0, n - 1)
        {
            cin >> arr[i][j];
            a[i][j] = arr[i][j];
            b[i][j] = arr[i][j];
            c[i][j] = arr[i][j];
        }
    }

    // cost of row increase e
    vl row(n), col(n);
    FOR(i, 0, n - 1)
    cin >> row[i];
    // cost of row increase e
    FOR(i, 0, n - 1)
    cin >> col[i];

    // row onojaee
    ll total_cost1 = 0;
    // row
    FOR(i, 0, n - 1)
    {
        // col
        FOR(j, 0, n - 1)
        {
            if (i + 1 < n && arr[i][j] == arr[i + 1][j])
            {
                FOR(k, 0, n - 1)
                arr[i + 1][k]++;
                total_cost1 += row[i + 1];
            }
            if (j + 1 < n && arr[i][j] == arr[i][j + 1])
            {
                FOR(k, 0, n - 1)
                arr[k][j + 1]++;
                total_cost1 += col[j + 1];
            }
        }
    }
    cout << total_cost1 << endl;

    // end row onojaee
    ll total_cost2 = 0;
    // row
    ROF(i, n - 1, 0)
    {
        // col
        ROF(j, n - 1, 0)
        {
            if (i - 1 >= 0 && a[i][j] == a[i - 1][j])
            {
                FOR(k, 0, n - 1)
                a[i - 1][k]++;
                total_cost2 += row[i - 1];
            }
            if (j - 1 >= 0 && a[i][j] == a[i][j - 1])
            {
                FOR(k, 0, n - 1)
                a[k][j - 1]++;
                total_cost2 += col[j - 1];
            }
        }
    }
    cout << total_cost2 << endl;

    // row last position onojaee
    ll total_cost3 = 0;
    // row
    FOR(i, 0, n - 1)
    {
        // col
        ROF(j, n - 1, 0)
        {
            if (i + 1 < n && b[i][j] == b[i + 1][j])
            {
                FOR(k, 0, n - 1)
                b[i + 1][k]++;
                total_cost3 += row[i + 1];
            }
            if (j - 1 >= 0 && b[i][j] == b[i][j - 1])
            {
                FOR(k, 0, n - 1)
                b[k][j - 1]++;
                total_cost3 += col[j - 1];
            }
        }
    }
    cout << total_cost3 << endl;

    // row last col first position onojaee
    ll total_cost4 = 0;
    // row
    ROF(i, n - 1, 0)
    {
        // col
        FOR(j, 0, n - 1)
        {
            if (i - 1 >= 0 && c[i][j] == c[i - 1][j])
            {
                FOR(k, 0, n - 1)
                c[i - 1][k]++;
                total_cost4 += row[i - 1];
            }
            if (j + 1 < n && c[i][j] == c[i][j + 1])
            {
                FOR(k, 0, n - 1)
                c[k][j + 1]++;
                total_cost4 += col[j + 1];
            }
        }
    }
    cout << total_cost4 << endl;
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