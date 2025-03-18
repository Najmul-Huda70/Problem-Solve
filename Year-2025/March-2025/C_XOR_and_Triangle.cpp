
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
int solve(int x)
{
    int y = 1;
    while (y * 2 < x)
    {
        y *= 2;
    }
    // cout << y << endl;
    for (int i = 0; i < 100; i++)
    {
        if (y <= 0)
            break;
        int XOR_VAL = x ^ y;
        if (x + y > XOR_VAL && x + XOR_VAL > y && y + XOR_VAL > x)
        {
            return y;
        }
        y--;
    }

    return -1;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
    {
        int val;
        cin >> val;

        cout << solve(val) << endl;
    }
    return 0;
}