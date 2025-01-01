#include<bits/stdc++.h>
using namespace std;

const int inf = 1e9;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  queue<int> q;
  map<int, int> d;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    q.push(x);
    d[x] = 0;
  }
  long long ans = 0;
  vector<int> v;
  while (!q.empty() and m > 0) {
    int u = q.front();
    q.pop();
    if (d.find(u - 1) == d.end() and m > 0) {
      d[u - 1] = d[u] + 1;
      ans += d[u - 1];
      v.push_back(u - 1);
      m--;
      q.push(u - 1);
    }
    if (d.find(u + 1) == d.end() and m > 0) {
      d[u + 1] = d[u] + 1;
      ans += d[u + 1];
      v.push_back(u + 1);
      m--;
      q.push(u + 1);
    }
  }
  cout << ans << '\n';
  for (auto x: v) {
    cout << x << ' ';
  }
  cout << '\n';
  return 0;
}