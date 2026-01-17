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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int mxBase = max(k - 1, n - k);
    int mnBase = min(k - 1, n - k);
    int ans = 1;
    for (int i = 1; i <= mxBase; i++)
    {
        int mx_days = 2 * i - 1;
        int curr_ans = i + 1 + min({m - mx_days, mnBase, i});
        ans = max(curr_ans, ans);
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

*/