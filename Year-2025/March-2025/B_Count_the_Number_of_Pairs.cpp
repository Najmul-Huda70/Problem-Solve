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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int big[26], small[26];
        memset(big, 0, sizeof(big));
        memset(small, 0, sizeof(small));
        int bi = 0, sm = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                small[(int)(s[i] - 'a')]++, sm++;
            else
                big[(int)(s[i] - 'A')]++, bi++;
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << big[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << small[i] << " ";
        // }
        // cout << endl;
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (small[i] > big[i])
            {
                small[i] -= big[i];
                ans += big[i];
                big[i] = 0;
            }
            else
            {
                big[i] -= small[i];
                ans += small[i];
                small[i] = 0;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            int bi = big[i] / 2;
            if (k >= bi)
            {
                ans += bi;
                k -= bi;
            }
            else
            {
                ans += k;
                k = 0;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            int sm = small[i] / 2;
            if (k >= sm)
            {
                ans += sm;
                k -= sm;
            }
            else
            {
                ans += k;
                k = 0;
            }
        }

        cout << ans << endl;
    }
    return 0;
}