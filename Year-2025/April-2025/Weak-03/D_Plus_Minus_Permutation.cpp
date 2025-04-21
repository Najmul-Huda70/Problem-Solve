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
ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}
ll solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    if (x == y)
        return 0;

    ll lcm_xy = lcm(x, y);
    ll divX = n / x;        // total divisible by x
    ll divY = n / y;        // total divisible by y
    ll div_XY = n / lcm_xy; // total divisible by both x and y

    ll cntX = divX - div_XY; // x but not y
    ll cntY = divY - div_XY; // y but not x
    /*
 top value sum
   sumX = n*(n+1)/2 - (n-cntX)*(n-cntX+1)/2;
        = {(n^2 + n) - (n^2 - n*cntX + n - cntX*n + cntX^2 - cntX)}/2 ;
        = (n^2 + n - n^2 + n*cntX - n + cntX*n - cntX^2 + cntX)/2 ;
        = ( n*cntX+ cntX*n - cntX^2 + cntX)/2 ;

      sumX = (n + n - cntX + 1) * cntX / 2;

 */
    ll sumX = (n + n - cntX + 1) * cntX / 2; // sum of top 'cntX' numbers
    ll sumY = sum(cntY);                     // sum of first 'cntY' numbers

    return sumX - sumY;
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