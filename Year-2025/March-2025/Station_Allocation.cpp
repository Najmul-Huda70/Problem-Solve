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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int &c : arr)
            cin >> c;

        sort(arr.begin(), arr.end());

        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + arr[i];
        }

        int Q;
        cin >> Q;
        while (Q--)
        {
            long long X, Y;
            cin >> X >> Y;

            int idx = lower_bound(all(arr), X) - arr.begin();

            long long mn = LLONG_MAX;

            if (idx < n)
            {
                long long a = max(0LL, Y - (pref[n] - arr[idx]));
                mn = min(mn, a);
            }

            if (idx > 0)
            {
                long long a = max(0LL, Y - (pref[n] - arr[idx - 1]));
                long long ct = max(0LL, X - arr[idx - 1]);
                mn = min(mn, a + ct);
            }

            cout << mn << endl;
        }
    }

    return 0;
}