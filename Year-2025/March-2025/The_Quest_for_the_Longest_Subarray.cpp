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
    ll n, k;
    cin >> n >> k;
    vl arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            if (sum == k)
            {
                ans = max(ans, (ll)(j - i + 1));
            }
        }
    }
    cout << ans << endl;
    return 0;
}