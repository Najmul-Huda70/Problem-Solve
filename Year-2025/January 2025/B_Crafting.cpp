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

    int t;
    cin >> t;

    while (t--) {
         int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        bool flag = true;

         for (int i = 0; i < n; i++) {
            if (b[i] > a[i]) {
                int dorkar = b[i] - a[i];  

               for (int j = 0; j < n; j++) {
                    if (i != j) {
                        if (a[j] - b[j] < dorkar) { 
                            flag = false;
                            break;
                        }
                    }
                }

                
            }
        }

        cout<<(flag ? "YES":"NO")<<endl;
    }

    return 0;
}
