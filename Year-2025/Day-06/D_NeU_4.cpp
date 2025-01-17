//Najmul Huda
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
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 

    int n;
    cin >> n;

    vi a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int mx_sum = 0;

   for (int l = 0; l < n; l++) {
        int sum_a = 0, sum_b = 0;
        for (int r = l; r < n; r++) {
            sum_a |= a[r];
            sum_b |= b[r];

            mx_sum = max(mx_sum, sum_a + sum_b);
        }
    }

    cout << mx_sum << endl;

    return 0;
}
