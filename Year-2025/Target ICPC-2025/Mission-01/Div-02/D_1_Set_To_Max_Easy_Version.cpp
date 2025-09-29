/*
Author: Najmul Huda
Problem solve : 2025-09-28 13:21:15
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
      vi a(n),b(n);
      for(auto &v:a) cin>>v;
      for(auto &v:b) cin>>v;
      bool flag=true;
      for(int i=0;i<n;i++){
        if(a[i]==b[i]) continue;
        else if(a[i]>b[i]){
            cout<<"No"<<endl;
            return;
        }
        else{
            //oparation find : this condition left and right
            bool left=false,right=false;
            //left
            for(int j=i-1;j>=0;j--){
                if(a[j]==b[i]){
                    left=true;
                    break;
                }
                if(a[j]>b[i]) break;
                if(b[i]>b[j]) break;
            }
            //right
            for(int j=i+1;j<n;j++){
                if(a[j]==b[i]){
                    right=true;
                    break;
                }
                if(a[j]>b[i]) break;
                if(b[i]>b[j]) break;
            }
            if(!left and !right) flag=false;
        }
      }
      condition(flag);
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}