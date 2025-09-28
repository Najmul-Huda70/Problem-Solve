/*
Author: Najmul Huda
Problem solve : 2025-09-26 19:36:27
*/
#include <bits/stdc++.h>
using namespace std;

#define SET(arr, a) memset(arr, a, sizeof(arr))
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

void solve()
{   
   int n;
   cin>>n;
   vi even,odd;
   for(int i=0;i<n;i++){
    int val;
    cin>>val;
    if(val&1) odd.push_back(val);
    else even.push_back(val);
   }
   if(odd.empty()){
    cout<<0<<endl;
    return;
   }
   ll ans=0;
   for(auto v:even) ans+=v;
   sort(all(odd),greater<int>());
   int need = (odd.size()+1)/2;
   for(int i=0;i<need;i++) ans+=odd[i];
   cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--) solve();
    return 0;
}