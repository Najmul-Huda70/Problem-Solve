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
   int n,m;
   cin>>n>>m;
   string x,s;
   cin>>x>>s;
   bool flag = true;
   int cnt=0;
    
   while(flag &&  50>x.size())
   {
     for(int i=0;i<x.size();i++)
     {
        string sb = x.substr(i,s.size());
        if(sb==s)
        {
            cout<<cnt<<endl;
            flag = false;
            break;
        }

      }
    //  if(x.find(s))
    //  {
    //      cout<<cnt<<endl;
    //         flag = false;
    //         break;
    //  }
      x+=x;
      cnt++;
   }
   //cout<<x<<endl;
 if(flag)  cout<<-1<<endl;
//    if(!flag) cout<<cnt<<endl;
//    else cout<<-1<<endl;
   
 }
return 0;
}