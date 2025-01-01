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

    int n;
    ll k;
    cin >> n >> k;

    vl arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

 sort(arr.begin(), arr.end());

     int median_pos = n / 2;
    ll median_val = arr[median_pos];

    for (int i = median_pos; i < n - 1; i++) {
         int same_count = i - median_pos + 1;

        ll diff = arr[i + 1] - arr[i];

         if (k >= same_count * diff) {
            k -= same_count * diff;
            median_val = arr[i + 1];
        } else {
            median_val += k / same_count;
            k = 0;
            break;
        }
    }

    if (k > 0) {
        median_val += k / (n - median_pos);
    }

    cout << median_val << endl;

    return 0;
}
