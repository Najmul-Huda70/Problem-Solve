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
    cout.tie(0);

    string s;
    cin >> s;
    ll n = s.size();
    deque<int> dq;
    vi v; 
    int ans = 0; 
    dq.push_back(-1); 
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            dq.push_back(i);
        } else {
            dq.pop_back();
            if (!dq.empty()) {
                ans = max(ans, (int)( i - dq.back()));   
                v.push_back((int)( i - dq.back()));      
            } else {
                dq.push_back(i); 
            }
        }
    }

    if (!v.empty()) {
        cout << ans << " " << count(v.begin(), v.end(), ans) << endl;
    } else {
        cout << 0 << " " << 1 << endl; 
    }

    return 0;
}
