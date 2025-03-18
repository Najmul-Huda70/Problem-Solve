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

    int n, q;
    cin >> n >> q;
    vi arr(n + 1);
    int preffix_sum[n + 1];
    preffix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        preffix_sum[i] = preffix_sum[i - 1] + arr[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << preffix_sum[r] - preffix_sum[l - 1] << endl;
    }

    return 0;
}