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
const int N=1e9+9;
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
   map<int,int> freq;
   //int mx = 0;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i]; 
     freq[arr[i]]++;
    // if(freq[arr[i]]>mx) mx=freq[arr[i]];  
    }
    vi mx_val;
    for(auto [index,cnt] : freq)
    {
       mx_val.push_back(cnt);
     }
//      for(auto val : mx_val) cout<<val<<" ";
//    cout<<endl;
   stable_sort(mx_val.begin(),mx_val.end());
        int j = 0;
        for(auto cnt : mx_val)
        {
            if(cnt>k) break;
            k-=cnt;
            j++;
         }
         cout<<max(1,(int)(mx_val.size()-j))<<endl;
   // }
 }
return 0;
}