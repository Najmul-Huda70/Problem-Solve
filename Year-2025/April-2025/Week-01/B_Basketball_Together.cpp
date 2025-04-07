// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int solve(vl &arr, int n, ll d)
{
    int cnt_team = 0;
    int per_team_member = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        int k = d / arr[i];
        ll team_power = k * arr[i];
        if (d < team_power)
        {
            if (per_team_member + k <= n)
            {
                per_team_member += k;
                cnt_team++;
            }
            else
                return cnt_team;
        }
        else
        {
            if (per_team_member + k + 1 <= n)
            {
                per_team_member += (k + 1);
                cnt_team++;
            }
            else
                return cnt_team;
        }
    }
    return cnt_team;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    ll d;
    cin >> n >> d;
    vl arr(n);
    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
    }
    stable_sort(all(arr));

    cout << solve(arr, n, d) << endl;

    return 0;
}