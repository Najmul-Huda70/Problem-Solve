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
    vector<int> arr(n + 1);
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int l = 1;
    while (l <= n && arr[l] == n - l + 1)
    {
        l++;
    }

    if (l > n)
    {
        for (int i = 1; i <= n; i++)
            cout << arr[i] << ' ';
    }
    else
    {
        int r = l + 1;
        int target = n - l + 1;

        while (r <= n && arr[r] != target)
            r++;

        int si = r - l + 1;
        int loop = si / 2;

        for (int i = 1; i <= loop; i++)
        {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }

        for (int i = 1; i <= n; i++)
            cout << arr[i] << ' ';
    }

    cout << endl;
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