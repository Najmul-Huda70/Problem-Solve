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
   int n,q;
   cin>>n>>q;
   vector<pair<int,int>>v;
   FOR(K,1,q){
    char ch;
    int x,k;
    cin>>ch>>x>>k;//Q X K or T X K
    if(ch=='T'){
        v.push_back({x,k});
    }
    else{
        int th_cnt=0;
        if(v.empty()) 
        {
            cout<<-1<<endl;
        }
        else {
            int ans=-1;
            FOR(i,0,v.size()-1)
        {
            if(v[i].first==x)
            {
                th_cnt++;
                if(th_cnt<=k)
                {
                   ans=v[i].second; // cout<<v[i].second<<endl;
                }
                if(th_cnt==k) break;
            }
        }
      cout<<ans<<endl;
        }
    }
   }
//  for(auto [x,k]:v){
//     cout<<x<<" "<<k<<endl;
//  }
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T=1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}