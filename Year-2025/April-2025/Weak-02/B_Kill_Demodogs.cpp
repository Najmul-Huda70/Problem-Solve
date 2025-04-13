// i hate _____
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long int
#define lll __int128_t
#define ld long double
#define pb push_back
#define ii pair<int, int>
#define endl "\n"
double pi = 2 * acos(0.0);

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << '{';
    for (const auto &x : v)
        os << " " << x;
    return os << '}';
}

typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update>
    ordered_set;

const ll mod = 1e9 + 7;
const ll six = 166666668;

ll sqsum(ll n)
{
    ll sq = (n * (n + 1)) % mod;
    ll tmp = (((2 * n) + 1) % mod);
    sq = (sq * tmp) % mod;
    sq = (sq * six) % mod;
    return sq;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = sqsum(n);
    ll x;
    if (n & 1)
    {
        x = sqsum(n >> 1);
        x = (x * 8) % mod;
    }
    else
    {
        x = sqsum((n - 1) >> 1);
        x = (x * 8) % mod;
        ll tmp = (n * (n - 1)) % mod;
        x = (x + tmp) % mod;
    }
    ans = (ans + x) % mod;
    ans = (ans * 2022) % mod;
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int test_cases = 1;
    cin >> test_cases;

    for (int tc = 1; tc <= test_cases; tc++)
    {

        // cout << "Case " << tc << ": ";
        solve();
        // printf("Case %d: %.10lf\n",tc,ans);
    }

    return 0;
}
