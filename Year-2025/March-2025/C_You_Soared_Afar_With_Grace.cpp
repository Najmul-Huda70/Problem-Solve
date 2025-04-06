// Najmul Huda (Corrected Version)
#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (ll i = a; i <= b; ++i)
#define ROF(i, a, b) for (ll i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<ll>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

const ll N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;

bool isValid(vl &a, vl &b)
{
    set<pair<ll, ll>> st;
    FOR(i, 0, a.size() - 1)
    {
        if (st.count({b[i], a[i]}))
            st.erase({b[i], a[i]});
        else
            st.insert({a[i], b[i]});
    }

    if (st.empty())
        return true;
    if (st.size() > 1)
        return false;

    auto p = *st.begin();
    if (p.first == p.second && a.size() % 2 == 1)
        return true;
    return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vl a(n), b(n), index_a(n + 5), index_b(n + 5);
        FOR(i, 0, n - 1)
        {
            cin >> a[i];
            index_a[a[i]] = i;
        }
        FOR(i, 0, n - 1)
        {
            cin >> b[i];
            index_b[b[i]] = i;
        }

        if (!isValid(a, b))
        {
            cout << -1 << '\n';
            continue;
        }

        vector<pair<ll, ll>> ans;

        FOR(i, 0, n / 2)
        {
            // Handle middle element if needed
            if (a[i] == b[i] && i != n / 2 && a[i] != a[n / 2])
            {
                ans.push_back({i, n / 2});
                swap(a[i], a[n / 2]);
                swap(b[i], b[n / 2]);
                swap(index_a[a[i]], index_a[a[n / 2]]);
                swap(index_b[b[i]], index_b[b[n / 2]]);
                i--; // re-check the same index
            }
            else if (a[i] != b[n - i - 1])
            {
                ll ai = index_b[a[i]];
                ans.push_back({ai, n - i - 1});

                swap(a[ai], a[n - i - 1]);
                swap(b[ai], b[n - i - 1]);

                swap(index_a[a[ai]], index_a[a[n - i - 1]]);
                swap(index_b[b[ai]], index_b[b[n - i - 1]]);
            }
        }

        cout << ans.size() << '\n';
        for (auto &[x, y] : ans)
            cout << x + 1 << " " << y + 1 << '\n'; // 1-based output
    }

    return 0;
}
