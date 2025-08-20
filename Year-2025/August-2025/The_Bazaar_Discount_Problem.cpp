// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_mafreq [key](v) mafreq[key] _element(all(v));
#define vec_minmafreq [key](v) minmafreq[key] _element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{  
   int n,k;
    cin>>n>>k;
    vi arr(n);
    map<int,int>mp;
    while(n--)
    {
        int K,D;
        cin>>K>>D;
        mp[D]=min(mp[D],K);
    }
    // for(auto [K,D]:mp){
    //     cout<<K<<" "<<D<<endl;
    // }
    int total_discount=0;
    int buy=0;
    for(auto [K,D]:mp){
            if(K<=k+buy){
                k-=K;
                buy+=K;
                total_discount+=D;
            }
    }
    cout<<total_discount<<endl;
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    
    return 0;
}