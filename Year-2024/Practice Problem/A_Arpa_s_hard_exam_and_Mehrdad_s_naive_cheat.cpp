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
const ll MOD = 10,inf = 1e9;
const ll MOD = 1e5;
ll __pow(ll base, ll n) {
    ll ans = 1;
    base %= MOD;  
    while (n > 0) {
        if (n % 2 == 1) {
            ans = (ans * base) % MOD;
            n--;
        } else {
            base = (base * base) % MOD;
            n /= 2;
        }
    }
    
    return ans;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    ll ans = __pow(8, n);
    cout << ans << endl;

    return 0;
}
