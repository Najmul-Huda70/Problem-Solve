// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.rbegin(), x.rend()
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
        int n, x;
        cin >> n >> x;
        vi arr(n);
        FOR(i, 0, n - 1)
        {
            cin >> arr[i];
        }
        stable_sort(all(arr));
        int ans = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] >= x)
                ans++;
            else
                break;
        }
        for (int k = i; k < n; k++)
        {
            int j = k;
            int mn = arr[k];
            k++;
            while (k < n)
            {
                mn = min(arr[k], mn); // mn = 3,3 = 3
                int d = k - j + 1;    // 4-3+1 = 2
                if (d * mn >= x)
                {
                    ans++;
                    break;
                }
                k++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}