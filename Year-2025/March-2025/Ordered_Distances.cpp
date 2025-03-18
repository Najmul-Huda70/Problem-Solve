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
int solve(vi &x, vi &y, int n)
{

    for (int pivot = 0; pivot < n; pivot++)
    {
        int cnt = 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (abs(x[pivot] - y[j]) < abs(x[pivot] - y[j + 1]))
                cnt++;
            else if (abs(x[pivot] - y[j]) == abs(x[pivot] - y[j + 1]))
            {
                if (y[j] < y[j + 1])
                    cnt++;
            }
            else
                break;
        }
        if (cnt == n)
            return pivot + 1;
    }

    return -1;
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
        int n;
        cin >> n;
        vi x(n), y(n);
        FOR(i, 0, n - 1)
        {
            cin >> x[i];
        }
        FOR(i, 0, n - 1)
        {
            cin >> y[i];
        }

        cout << solve(x, y, n) << endl;
    }
    return 0;
}