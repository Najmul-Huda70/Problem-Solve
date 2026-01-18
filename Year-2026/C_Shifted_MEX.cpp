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
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }

    for (auto v : st)
    {
        arr.push_back(v);
    }
    n = arr.size();
    int x = -arr[0];

    for (int i = 0; i < n; i++)
    {
        arr[i] += x;
    }
    sort(all(arr));
    set<int> ans;
    for (int i = 0; i < n - 1; i++)
    {
        int cnt = 0;
        while (i < n - 1 and arr[i + 1] - arr[i] == 1)
        {
            cnt++;
            i++;
        }
        ans.insert(cnt);
    }
    if (ans.empty())
    {
        cout << 1 << endl;
        return;
    }
    int mx = 0;
    for (auto v : ans)
    {
        mx = max(mx, v + 1);
    }
    cout << mx << endl;
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