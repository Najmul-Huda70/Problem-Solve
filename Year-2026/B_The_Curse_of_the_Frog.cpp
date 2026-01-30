// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void brute_force();
void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    // vector<tuple<int, int, int>> Jump_types;
    ll mx = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        // Jump_types.push_back({a, b, c});
        x -= 1LL * a * (b - 1);
        ll rollback = 1LL * a * (b - 1) + (a - c);
        // cout << "rollback: " << rollback << endl;
        mx = max(rollback, mx);
    }
    // cout << "mx: " << mx << endl;
    if (x <= 0)
    {
        cout << 0 << endl;
        return;
    }
    if (mx <= 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << (x / mx + (x % mx == 0 ? 0 : 1)) << endl;
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

/*-----------------------------------Brute Force Approach--------------------------------*/
void brute_force() // time complexity O(...)
{
}
/*---------------------------------------Ovservation-------------------------------------*/
/*

*/