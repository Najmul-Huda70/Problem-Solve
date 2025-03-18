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
        char ch;
        cin >> n >> ch;

        string s;
        cin >> s;
        if (ch == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        s += s;
        // cout << s.size() << endl;
        int mx = 0, first = -1;
        for (int i = 0; i < 2 * n; i++)
        {
            if (first == -1 && s[i] == ch)
                first = i;
            else if (first >= 0 && s[i] == 'g')
            {
                mx = max(mx, i - first);
                first = -1;
            }
            // if (s[i] == ch)
            // {
            //     for (int j = i + 1; j < 2 * n; j++)
            //     {
            //         if (s[j] == 'g')
            //         {
            //             mx = max(mx, j - i);
            //             break;
            //         }
            //     }
            // }
        }

        cout << mx << endl;
    }
    return 0;
}