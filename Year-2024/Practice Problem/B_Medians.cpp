//s.i.snajmulhuda2002
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
    if(n==1)
    { 
        //k=1
         cout<<1<<"\n"<<1<<"\n";
    }
    // jeheto n=odd 
    //median([median(b1),median(b2),…,median(bm)])=k
   else if(k%2==0)
   {
     //n=3 k=2
     cout<<3<<endl;
     cout<<1<<" "<<k<<" " <<k+1<<endl;
   }
   else if(k!=1 && k+2<=n) 
   {
        // n=5 k=3
        cout<<5<<endl;
        cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<k+2<<endl;
   }
   else{
     cout<<-1<<endl;
   }
      
 
 }
return 0;
}