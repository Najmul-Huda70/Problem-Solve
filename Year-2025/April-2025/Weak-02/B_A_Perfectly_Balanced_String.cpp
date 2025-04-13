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
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    map<char, int> last;
    int mn_different = INT_MAX;
    FOR(i, 0, 25)
    last['a' + i] = -1;
    FOR(i, 0, n - 1)
    {
        if (last[s[i]] == -1)
            last[s[i]] = i;
        else
        {
            mn_different = min(mn_different, i - last[s[i]] - 1);
            last[s[i]] = i;
        }
        st.insert(s[i]);
    }

    /*
     if all char same means st.size()==1 ? yes

     if same two character (minimum gap +1 <st.size()) condtion is false answer is true;

    */
    condition((st.size() == 1) || !(mn_different + 1 < st.size()));
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