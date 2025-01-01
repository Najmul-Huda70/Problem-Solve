// s.i.snajmulhuda2002
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
bool solve(ll val)
{
        ll x =sqrtl(val);
        for(ll i=2;i*i<=x;i++)
        {
           if(val%i==0 ) 
           {
            if(val/i != i) return false;
            else return true;
         }
        }
       return 1LL*x*x == val && val!=1;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vl v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (solve(v[i]) ? "YES" : "NO") << endl;
    }

    return 0;
}