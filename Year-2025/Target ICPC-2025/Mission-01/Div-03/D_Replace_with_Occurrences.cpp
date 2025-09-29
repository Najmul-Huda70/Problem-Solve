/*
Author: Najmul Huda
Problem solve : 2025-09-28 21:47:43
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
     vi a(n);
     int digit=0;
     unordered_map<int,vi>mp;
     for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]].push_back(i);
     }
     int s=0;
     for(auto [k,v]:mp) s+=(int)(v.size()/k)*k;

     if(s==n){

        vi ans(n,1);
        
        for(auto [k,v]:mp){
            // k = koto bar kore takbe
            // v = index of a[i] array i=index
            
            for(int i=0;i<v.size();i++){
                if(i%k==0 or k==1) digit++;
                ans[v[i]] = digit;
            }
        }
        for(auto v:ans) cout<<v<<" ";
        cout<<endl;
     } 
     else cout<<-1<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)   solve();
    return 0;
}