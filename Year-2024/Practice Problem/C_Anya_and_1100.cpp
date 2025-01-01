// s.i.snajmulhuda2002
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
        string s;
        cin >> s;
        string good = "1100";
        int n = s.size();
        int cnt = 0;
        for (int i = 0; i <= n - 4; i++)
        {
            if (s.substr(i, 4) == good)
            {
                cnt++;
            }
        }
        int q;
        cin >> q;
        while (q--)
        {
            int idx;
            cin >> idx;
            char c;
            cin >> c;
            idx--;
            for (int i = max(0, idx - 3); i <= min(n - 4, idx); i++)
            {
                if (s.substr(i, 4) == good)
                {
                    cnt--;
                }
            }
            s[idx] = c;
            for (int i = max(0, idx - 3); i <= min(n - 4, idx); i++)
            {
                if (s.substr(i, 4) == good)
                {
                    cnt++;
                }
            }
            cout << (cnt > 0 ? "YES" : "NO") << endl;
        }
    }
    return 0;
}