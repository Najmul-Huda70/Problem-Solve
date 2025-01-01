//s.i.snajmulhuda2002
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<int, int> mp;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        while (n % i == 0) {
          n /= i;
          mp[i]++;
        }
      }
    }
    if (n > 1) {
      mp[n]++;
    }
    ll sum = 0;
    while (!mp.empty()) {
      int mn =INT_MAX;
      for (auto [prime,ex]: mp) {
        mn = min(mn, ex);
      }
      ll cur = 1;
      vector<int> bad;
      for (auto &[prime,ex]: mp) {
      
        cur *= prime;
        ex-=mn;
        if (ex == 0) {
          bad.push_back(prime);
        }
      }
      sum += 1LL * cur*mn;
      for (auto val: bad) {
        mp.erase(mp.find(val));
      }
    }
    cout << sum <<endl;
  }
  return 0;
}