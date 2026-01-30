// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
const int N = 1000 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void brute_force();
ll f[N + 1];
bool computed[N + 1];
ll fibo(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (computed[n])
        return f[n];
    computed[n] = true;
    return f[n] = fibo(n - 1) + fibo(n - 2);
}
void solve()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
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