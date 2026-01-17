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
    set<int> st;
    int mx = INT_MIN;
    int mn = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int a, x;
        cin >> a >> x;
        if (a == 1)
        {
            mx = max(mx, x);
        }
        else if (a == 2)
        {
            mn = min(mn, x);
        }
        else
        {
            st.insert(x);
        }
    }
    int ans = mn - mx + 1;

    for (auto v : st)
    {
        if (mx <= v and mn >= v)
            ans--;
    }
    cout << (ans <= 0 ? 0 : ans) << endl;
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