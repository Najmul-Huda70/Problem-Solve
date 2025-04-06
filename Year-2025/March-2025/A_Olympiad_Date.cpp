// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
map<int, int> mp = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
bool condition(vi &freq, int n)
{
    if (freq[0] >= mp[0] && freq[1] >= mp[1] && freq[2] >= mp[2] && freq[3] >= mp[3] && freq[5] >= mp[5])
        return true;
    else
        return false;
}

int solve()
{
    int n;
    cin >> n;
    vi arr(n);
    vi freq(10, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        if (condition(freq, n))
        {
            return i + 1;
        }
    }
    return 0;
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
        cout << solve() << endl;
    }
    return 0;
}