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
    int n, h, l;
    cin >> n >> h >> l;
    vector<int> arr(n);
    int invalid = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > h and arr[i] > l)
            invalid++;
    }
    sort(all(arr));
    auto x = upper_bound(all(arr), h);
    auto y = upper_bound(all(arr), l);
    // cout << x - arr.begin() << " " << y - arr.begin() << endl;
    int ans = min(x - arr.begin(), y - arr.begin());

    int k = (n - invalid) / 2;
    ans = min(k, ans);
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