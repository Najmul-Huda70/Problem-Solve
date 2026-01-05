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
    cin >> n;
    ll arr[n + 1], abs_arr[n + 1];
    arr[0] = abs_arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // first element
    abs_arr[1] = arr[1];
    for (int i = 2; i < n; i++)
    {
        abs_arr[i] = abs(arr[i]);
    }
    // last element
    abs_arr[n] = -arr[n];

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
        abs_arr[i] += abs_arr[i - 1];
    }
    ll ans = LLONG_MIN;
    for (int i = 1; i <= n; i++)
    {
        ll l = (i == 1 ? 0 : abs_arr[i - 1]);
        ll r = arr[n] - arr[i];
        ans = max(ans, l - r);
    }
    cout << ans << endl;
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
    arr[26]={a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y,z}
    target stay: k
    *operation array of left side: a, b, c, d, e, f, g, h, i, j
                 !fixed            +                          -
                 *others element is absolute value
    ! right side eny time negative

*/