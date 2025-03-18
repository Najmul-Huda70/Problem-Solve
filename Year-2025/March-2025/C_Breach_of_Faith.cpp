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
        ll n;
        cin >> n;
        vl b(2 * n);
        FOR(i, 0, 2 * n - 1)
        {
            cin >> b[i];
        }

        stable_sort(all(b));
        vl a1, a2;
        ll sumA1 = 0LL, sumA2 = 0LL;
        for (int i = 0; i < n; i++)
        {
            a1.push_back(b[i]);
            sumA1 += b[i];
        }
        for (int i = n; i < 2 * n; i++)
        {
            a2.push_back(b[i]);
            sumA2 += b[i];
        }
        // FOR(i, 0, n - 1)
        // {
        //     cout << a1[i] << " ";
        // }
        // cout << endl;
        // FOR(i, 0, n - 1)
        // {
        //     cout << a2[i] << " ";
        // }
        // cout << endl;
        // cout << endl;
        vl ans;
        int k = n - 1;
        FOR(i, 0, n - 1)
        {
            ans.push_back(a2[k]);
            ans.push_back(a1[i]);
            k--;
        }

        ll difr = sumA2 - sumA1;
        if (find(all(a1), difr) == a1.end() && find(all(a2), difr) == a2.end())
        {
            // cout << difr << endl;
            cout << difr << " ";
            for (int i = 0; i < 2 * n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;

            continue;
        }
        bool flag = false;
        for (int i = 1; i < 2 * n; i++)
        {
            swap(ans[i], ans[i + 1]);
            if (i % 2 == 1)
            {
                sumA1 += ans[i];
                sumA1 -= ans[i + 1];

                sumA2 -= ans[i];
                sumA2 += ans[i + 1];
            }
            else
            {
                sumA2 += ans[i];
                sumA2 -= ans[i + 1];

                sumA1 -= ans[i];
                sumA1 += ans[i + 1];
            }
            difr = sumA2 - sumA1;
            if (difr > 0LL && find(all(a1), difr) == a1.end() && find(all(a2), difr) == a2.end())
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << difr << " ";
            for (int i = 0; i < 2 * n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}