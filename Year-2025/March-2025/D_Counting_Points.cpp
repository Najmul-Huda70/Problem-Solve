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
void solve()
{
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
        /*
        2 3
       0 0
       1 2

       */
        int n, m;
        cin >> n >> m; // 2 3
        ll ans = m * 1LL;
        ll sumx = 0LL;
        vi x(n); // 0 0
        FOR(i, 0, n - 1)
        {
            cin >> x[i];
            sumx += x[i];
        }
        vi r(n); // 1 2
        FOR(i, 0, n - 1)
        {
            cin >> r[i];
        }

        vector<pair<int, double>> mp;
        for (int i = 0; i < n; i++)
        {
            int lowX = x[i] - r[i];
            int HighX = x[i] + r[i];
            for (int X = lowX; X <= HighX; X++)
            {
                double d = r[i] * r[i] - (X - x[i]) * (X - x[i]);
                if (d >= 0)
                {
                    double Y = sqrt(d);
                    if (Y == 0)
                    {
                        mp.push_back({X, Y});
                        // mp[X] = Y;
                        // cout << X << " " << Y << endl;
                    }

                    else
                    {
                        mp.push_back({X, Y});
                        mp.push_back({X, -Y});
                        // mp[X] = -Y;
                        // mp[X] = Y;

                        // cout << X << " " << Y << endl;
                        // cout << X << " " << -Y << endl;
                    }
                }
            }
        }
        // cout << mp.size() << endl;

        // for (auto [X, Y] : mp)
        // {
        //     cout << X << " " << Y << endl;
        // }
        cout << "\n"
             << mp.size() + 1 << endl;
        // cout << "\n\n";
    }
    return 0;
}