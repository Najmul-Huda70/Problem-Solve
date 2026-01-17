// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
const int N = 2e5 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void brute_force();
int cnt_value[N];
ll preffix_sum[N];
ll calculation(int n, int need) // n=9,need =8
{
    preffix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        preffix_sum[i] = preffix_sum[i - 1] + cnt_value[i];
    }

    ll total[n + 1];
    total[1] = n;
    for (int i = 2; i <= n; i++)
    {
        total[i] = 0;
    }

    for (int target = 2; target <= n; target++)
    {
        total[target] += cnt_value[target]; // 2
        ll a = 1LL * target * 2, b = 1LL * target * 3, c = 1LL * target * 4;
        if (a <= n)
            total[target] += cnt_value[a]; // 1
        if (b <= n)
            total[target] += cnt_value[b]; // 2
        if (c <= n)
            total[target] += preffix_sum[n] - preffix_sum[c - 1];
    }

    for (int i = n; i >= 1; i--)
    {
        if (total[i] >= need)
            return i;
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < N; i++)
    {
        cnt_value[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cnt_value[x]++;
    }
    int need_valid = n - k;
    cout << calculation(n, need_valid) << endl;
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