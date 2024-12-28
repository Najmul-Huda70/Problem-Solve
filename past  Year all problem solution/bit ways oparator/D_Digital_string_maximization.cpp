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
   string s;
   cin>>s;
   int n  = s.size();
   for(int i=0;i<n;i++)
   {   
      int j = i+1;
      int k = i;  
      if(s[k]<s[j])
      {
        
        while(s[j]-1>s[j-1] && k>=0 && j>=0)
         {
            s[j]--;
            swap(s[j],s[k]);
            swap(k,j);
            k-=2;
        }
         
      } 
    }
 cout<<s<<endl;
 }
return 0;
}