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
int a[N];
void solve()
{
    int n;
    cin >> n;
    ll prefSum[n + 1];
    prefSum[0] = 0;
    int zero = 0;
    for (int i = 1; i <= n; i++)
    {
        prefSum[i] = 0;
    }
    unordered_map<ll, int> mp;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefSum[i] += prefSum[i - 1] + a[i];
        mp[prefSum[i]]++;
        if (mp[prefSum[i]] >= 2)
        {
            mp[prefSum[i]]--;
            ans++;
        }
    }
    cout << "pref_Sum: ";
    for (int i = 0; i <= n; i++)
    {
        cout << prefSum[i] << " ";
    }
    cout << endl;
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