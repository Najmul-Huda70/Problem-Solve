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
        int n, m, k;
        cin >> n >> m >> k;
        vi a(m);
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }

        vi b(k);
        bool flag[N];
        memset(flag, false, sizeof(flag));
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            flag[b[i]] = true;
        }
        if (n - k > 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 0;
            }
            cout << endl;
            continue;
        }
        if (n == k)
        {
            for (int i = 0; i < m; i++)
            {
                cout << 1;
            }
            cout << endl;
            continue;
        }
        int p = 0;
        for (int i = 0; i < m; i++)
        {
            if (flag[a[i]])
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }

    return 0;
}
