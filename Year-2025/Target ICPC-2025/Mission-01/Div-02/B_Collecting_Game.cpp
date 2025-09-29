/*
Author: Najmul Huda
Problem solve : 2025-09-28 11:47:19
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
   int n;cin>>n;
   vi a(n);
   map<int,int>mp_a;
   for(auto &v:a){// Overall T.C O(n log(n) )
    cin>>v;
    mp_a[v]++;
   }

   vi sort_a;
   for(auto [v,cnt]:mp_a){//T.C O(n)
    while(cnt--) sort_a.push_back(v);
   }
    //    for(auto v:sort_a) cout<<v<<" ";
    //    cout<<endl;
   vi ans(n,-1);
   ll sum=0;
   for(int i=0;i<n-1;i++){//T.C O(n)
    sum+=sort_a[i];
    if(sum<sort_a[i+1]) ans[i]=i;
   }
   ans[n-1]=n-1;
   for(int i=n-2;i>=0;i--){//T.C O(n)
    if(ans[i]==-1) ans[i]=ans[i+1];
   }

//    for(auto v:ans) cout<<v<<" ";// T.C O(n)
//    cout<<endl;
unordered_map<int,int>mp;
for(int i=0;i<n;i++){
    mp[sort_a[i]]=ans[i];
}
for(auto v:a){
    cout<<mp[v]<<" ";
}
cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();// T.C O(t*n log n)
    return 0;
}