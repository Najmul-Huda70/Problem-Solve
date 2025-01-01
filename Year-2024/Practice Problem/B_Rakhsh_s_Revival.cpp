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

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;

        int cnt = 0; 
        int ans = 0; 

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cnt++;
            } else {
                cnt = 0;  
            }

           if (cnt == m) {
                ans++;
                cnt = 0;  
               if(k>1)   i += (k-1);
            }
        }

        cout << ans <<endl;
    }

    return 0;
}
