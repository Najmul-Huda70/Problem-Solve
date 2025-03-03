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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> pref(n, 0), suff(n, 0);
        set<char> st;

        // Prefix count
        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
            pref[i] = st.size();
        }

        st.clear();

        // Suffix count
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(s[i]);
            suff[i] = st.size();
        }

        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, (ll)(pref[i] + suff[i + 1]));
        }

        cout << ans << endl;
    }
    return 0;
}