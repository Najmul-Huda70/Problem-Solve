/*
Author: Najmul Huda
Created: 2025-09-09 10:01:04
*/
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (int i = a; i <= b; i += increment)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define all(arr) arr.begin(), arr.end()
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const int mod = 1e9 + 7, inf = 1e9;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
bool T_primes(ll v){
ll x =sqrtl(v);
if(1LL*x*x==v) return true;
else return false;
}
void solve()
{  
    ll n; cin >> n; vl arr(n); fr(i,0,n-1,1) cin>>arr[i];
   for(auto v:arr) condition(T_primes(v));
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}