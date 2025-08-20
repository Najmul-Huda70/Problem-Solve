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
   int n,c;
cin>>n>>c;
vi arr(n);
int ans=0;
FOR(i,0,n-1)
  {
  cin>>arr[i];
if(arr[i]>=c){
   // ans+=int(arr[i]/c);
    //arr[i]%=c;
}
  }
  //wrong way
 int i=0,j=1;
  while(i<n)
  {
    if(j<n and arr[i]+arr[j]<=c) i+=2,j+=2;
    else i++,j++;
    ans++;
  }
  cout<<ans<<endl;
  //currect way

// unordered_map<int,int>mp;
//     for(auto man:arr)
//     {
//         mp[man]++;
//     }
//     // for(auto [man,cnt]:mp){
//     //     cout<<man<<" "<<cnt<<endl;
//     // }
//     for(auto [man,cnt]:mp){
//         if(mp[c-man]>0){
//            int bad=min(cnt,mp[c-man]);
//            ans+=bad;
//            //cout<<cnt<<" "<<mp[c-man]<<endl;
//            mp[man]-=bad;
//            mp[c-man]-=bad;
//         }
//     }
//     int sum=0;
//     for(auto [man,cnt]:mp){
//         sum+=cnt;
//     }
//     int again=int(sum/c)+(sum%c==0 ? 0:1);
//     ans+=again;
//     cout<<ans<<endl;
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