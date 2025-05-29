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
#define vec_min(v) min_element(all(v));
#define vec_max(v) max_element(all(v));
#define vec_minmax(v) minmax_element(all(v));
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

bool flag(const vector<pair<ll, ll>> &v, ll k)
{
   ll left = 0, right = 0;
   for (auto [l, r] : v)
   {
      left = max(l, left - k);
      right = min(r, right + k);
      if (left > right)
         return false;
   }
   return true;
}

void solve()
{
   int n;
   cin >> n;
   vector<pair<ll, ll>> v(n);
   FOR(i, 0, n - 1)
   cin >> v[i].first >> v[i].second;

   ll low = 0, high = 2e18;
   ll ans = high;
   while (low <= high)
   {
      ll mid = low + (high - low) / 2;
      if (flag(v, mid))
      {
         ans = mid;
         high = mid - 1;
      }
      else
      {
         low = mid + 1;
      }
   }
   cout << ans << endl;
}

int32_t main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int T;
   cin >> T;
   while (T--)
   {
      solve();
   }
   return 0;
}