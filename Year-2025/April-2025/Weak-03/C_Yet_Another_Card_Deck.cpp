// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vi arr(n + 1), t(k + 1);
    map<int, int> mp_array; // value : position
    FOR(i, 1, n)
    {
        cin >> arr[i];
        if (mp_array[arr[i]] > 0)
            mp_array[arr[i]] = min(i, mp_array[arr[i]]);
        else
            mp_array[arr[i]] = i;
    }
    // for (auto [val, pos] : mp_array)
    //     cout << val << " --> " << pos << endl;
    FOR(i, 1, k)
    cin >> t[i];
    vi ans;

    FOR(i, 1, k)
    {
        int position = mp_array[t[i]];
        ans.push_back(position);
        for (auto [val, pos] : mp_array)
        {
            if (pos < position)
            {
                mp_array[val]++;
            }
        }
        mp_array[t[i]] = 1;
    }
    print(ans);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}