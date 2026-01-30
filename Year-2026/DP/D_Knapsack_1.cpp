// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
const int N = 1e5 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void brute_force();
ll n, W, w[101], v[101], DP[101][N];
ll compute(ll i, ll weight)
{
    if (i == n + 1)
        return 0;
    if (DP[i][weight] != -1)
        return DP[i][weight];
    ll ans = compute(i + 1, weight);
    if (weight + w[i] <= W)
        ans = max(ans, compute(i + 1, weight + w[i]) + v[i]);
    return DP[i][weight] = ans;
}
void solve()
{
    cin >> n >> W;
    memset(DP, -1, sizeof DP);
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    cout << compute(1, 0) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}

/*-----------------------------------Brute Force Approach--------------------------------*/
void brute_force() // time complexity O(...)
{
}
/*---------------------------------------Ovservation-------------------------------------*/
/*

*/