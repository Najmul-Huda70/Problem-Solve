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
int step[N];
int min_Steps(int i)
{
    if (i == 1)
        return 0;
    if (step[i] != -1)
        return step[i];
    int ans = min_Steps(i - 1) + 1;
    if (i % 2 == 0)
        ans = min(ans, min_Steps(i / 2) + 1);
    if (i % 3 == 0)
        ans = min(ans, min_Steps(i / 3) + 1);
    return step[i] = ans;
}
void solve()
{
    int n;
    cin >> n;
    cout << min_Steps(n) << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    memset(step, -1, sizeof step);
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