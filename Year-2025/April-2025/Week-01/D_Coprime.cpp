// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.rbegin(), x.rend()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1000 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
// maximum index sum of co-prime pairs

// co-prime pairs
vi coPrime[N];
void CoPrime()
{
    FOR(i, 1, N - 1)
    {
        FOR(j, 1, N - 1)
        {
            if (__gcd(i, j) == 1)
            {
                coPrime[i].push_back(j);
            }
        }
    }
}

// find each value maximum index

/*
 suppose,
 array  1 3 6 3 2 1 9
 index  1 2 3 4 5 6 7

 value   maximum index
 1-->          6
 2-->          5
 3-->          4
 9-->          7

*/
void maxIndex(vi &mxIdx, vi &arr, int n)
{
    FOR(i, 1, n)
    {
        mxIdx[arr[i]] = i;
    }
}
void solve()
{

    int n;
    cin >> n;
    vi arr(n + 1);
    FOR(i, 1, n)
    cin >> arr[i];
    vi mxIdx(N, -1);
    maxIndex(mxIdx, arr, n);
    ll ans = -1;

    // time complexity O(N*N) = O(10^6)
    FOR(i, 1, N - 1)
    {
        // not found
        if (mxIdx[i] == -1)
            continue;
        if (i == 1)
        {
            ans = max(ans, 1LL * (mxIdx[i] + mxIdx[i]));
            continue;
        }
        for (auto cp : coPrime[i])
        {
            if (mxIdx[cp] == -1) // not found coPrime value
                continue;
            ans = max(ans, (mxIdx[i] + mxIdx[cp]) * 1LL);
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    CoPrime();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}