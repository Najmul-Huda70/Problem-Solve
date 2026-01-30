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
    int n, s, x;
    cin >> n >> s >> x;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        sum += v;
    }
    if (sum > s)
        cout << "NO" << endl;
    else
    {
        s -= sum;
        cout << (s % x == 0 ? "YES" : "NO") << endl;
    }
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