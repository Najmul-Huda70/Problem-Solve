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
int cnt[N + 1];
int MEX()
{
    for (int i = 0; i <= N; i++)
    {
        if (cnt[i] > 0)
            continue;
        else
            return i;
    }
    return -1;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i <= n; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int final_arr_size = k - 1;
    int op_need = n - final_arr_size;

    int possible = 0;
    for (int i = 0; i <= n; i++)
    {
        if (cnt[i] > 1)
        {
            possible += (cnt[i] - 1);
            cnt[i] = 1;
        }
    }
    if (op_need <= possible)
    {
        cout << MEX() << endl;
        return;
    }

    op_need = op_need - possible;
    for (int i = n; i >= 0 and op_need > 0; i--)
    {
        if (cnt[i] == 1)
        {
            cnt[i]--;
            op_need--;
        }
    }

    cout << MEX() << endl;
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