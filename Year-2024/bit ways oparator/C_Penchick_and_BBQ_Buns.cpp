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
   int n;
   cin>>n;
   if(n%2==1 && n<27) cout<<-1<<endl;
   else{
         if(n%2==0) 
         {
            for(int i=1;i<=n/2;i++)
            {
              cout<<i<<" "<<i<<" ";
             }
             cout<<endl;
         }
         else 
         {
             vi arr = {1,3,3,4,4,5,5,6,6,1,7,7,8,8,9,9,10,10,11,11,12,12,2,13,13,1,2};
            for(int i=0;i<27;i++) cout<<arr[i]<<" ";
            n-=27;
            for(int i=0;i<n/2;i++) cout<<14+i<<" "<<14+i<<" "; 
            cout<<endl;
         }
   }
   
 
 }
return 0;
}