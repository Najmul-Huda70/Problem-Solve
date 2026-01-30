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
    int n, q;
    cin >> n >> q;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = max(a[i], b[i]);
    }
    int mx = 0;
    for (int i = n; i > 0; i--)
    {
        if (a[i] > mx)
            mx = a[i];
        a[i] = max(mx, a[i]);
    }
    ll prefSum[n + 1];
    prefSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        prefSum[i] = prefSum[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << prefSum[r] - prefSum[l - 1] << ' ';
    }
    cout << endl;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << ' ';
    // }
    // cout << endl;
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