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
 int n,m;
 cin>>n>>m;
 map<int,char>v;
for(int i=1;i<=n;i++)
{
  v[i]='-';
 }
//  for(int i=1;i<=n;i++)
//  {
//    cout<<i<<" "<<v[i]<<endl;
//   }
//vb arr(n+1,true);
// for(int i=2;i*i<=n;i++)
// {
//   if(arr[i])
//   {
//      for(int j=i*i;j<=n;j+=i)
//      {
//        arr[j]=false;
//       }
//   }
//  }
vi rem;
 while(m--)
 {
     char c;
 cin>>c;
 int q;
 cin>>q;
 //cout<<c<<" "<<q<<endl;
 if(v[q]!=c) 
 {   
     rem.push_back(q);
     int g=q,k;
     for(int i=0;i<rem.size();i++)
     {
        g=__gcd(rem[i],g);
        if(g!=1) 
        {
            k=rem[i];
             break;
        }
      }
     if(rem.size()==1 || g==1)
     {
        cout<<"Success"<<endl;
        v[q]=c;
     }
     else 
     {
        rem.erase(rem.end()-1);
        // for(int i=0;i<rem.size();i++)
        // {
        //    cout<<rem[i]<<" ";
        //  }
        //  cout<<endl;
         cout<<"Conflict with "<<k<<endl;
     }
 }
 else 
 {
     if(c=='-' && c==v[q]) 
     cout<<"Already off"<<endl;

     else if(c=='+' && c==v[q])
      cout<<"Already on"<<endl;
 }
 }
return 0;
}