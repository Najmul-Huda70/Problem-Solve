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
 int t;cin>>t;
 while(t--)
 {
   int n,k;
   cin>>n>>k;
   vi arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    }
    if(k==1 && n>=2 ) 
    { 
        bool flag = false;
       for(int i=0;i<n-1;i++)
       {
          if(arr[i]>arr[i+1]) {
             cout<<"NO"<<endl;
             flag=true;
             break;
          }
        }
        if(!flag) cout<<"YES"<<endl;
      
        
    }
    else cout<<"YES"<<endl;
    // int cnt=1;
    // bool flag = true;
    // for(int i=1;i<n;i++)
    // {  
    //     // cout<<cnt<<endl;
    //     if(cnt>k) 
    //     {
    //         flag = false;
    //         break;
    //     }
    //     if(arr[i-1]>arr[i]) cnt++;
    //     else cnt =1;
    //     // cout<<cnt<<endl;
    //  }
    //  cout<<(flag && cnt<=k ? "YES":"NO")<<endl;
 
 }
return 0;
}