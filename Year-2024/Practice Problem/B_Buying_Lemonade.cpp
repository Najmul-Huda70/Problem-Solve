/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    sort(v.begin(), v.end());

   ll cans_cnt = 0, Zero_idx_cnt = 0;
    int X=0;
    int bad = 0;
    for(int i=0;i<n;i++)
    {
      X = v[i];
      X-=bad;
      cans_cnt += 1LL * (n - i) * X;
      if (cans_cnt >= k)
        break;
      Zero_idx_cnt++;
      bad +=X;
    }
    cout << k + Zero_idx_cnt << endl;
  }
  return 0;
}