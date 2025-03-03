// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
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
        vi a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 1;
        map<int, int> mp1, mp2;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt++;
            else
                cnt = 1;
            mp1[a[i]] = max(cnt, mp1[a[i]]);
        }
        cnt = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
                cnt++;
            else
                cnt = 1;
            mp2[b[i]] = max(cnt, mp2[b[i]]);
        }
        for (int i = 0; i < n; i++)
        {
            mp1[a[i]] = max(mp1[a[i]], 1);
            mp2[b[i]] = max(mp2[b[i]], 1);
        }
        // for (auto [val, cnt] : mp1)
        //     cout << val << " " << cnt << endl;
        // for (auto [val, cnt] : mp2)
        //     cout << val << " " << cnt << endl;

        ll ans = LLONG_MIN;

        for (auto [val, cnt] : mp1)
            ans = max(ans, (ll)(cnt + mp2[val]));

        for (auto [val, cnt] : mp2)
            ans = max(ans, (ll)(mp1[val] + cnt));
        cout << ans << endl;
    }
    return 0;
}