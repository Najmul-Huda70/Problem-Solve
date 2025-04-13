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
int solve()
{
    int n;
    cin >> n;
    vi W(n);
    ll total_Weight = 0;

    FOR(i, 0, n - 1)
    {
        cin >> W[i];
        total_Weight += W[i];
    }
    // if (total_Weight % 2 == 1)
    //     return 0;

    ll alice_weight = 0, Bob_Weight = 0;
    int j = n - 1;
    ll max_candies = INT_MIN;
    FOR(i, 0, j)
    {
        alice_weight += W[i];
        while (Bob_Weight < alice_weight && (i < n && j >= 0))
        {
            if (j <= i)
                break;
            Bob_Weight += W[j];
            j--;
        }
        if (alice_weight == Bob_Weight)
            // v.push_back(i + n - j);
            max_candies = max(max_candies, 1LL * (n + i - j));
    }

    return max_candies != INT_MIN ? max_candies : 0;
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