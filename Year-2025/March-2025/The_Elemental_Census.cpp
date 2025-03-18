// Najmul Huda
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

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp[val]++;
    }
    for (auto [val, cnt] : mp)
        cout << val << ": " << cnt << endl;

    return 0;
}