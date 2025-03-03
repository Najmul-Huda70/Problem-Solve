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
   int n;
   cin>>n;
   string s;
   cin>>s;
   if(count(s.begin(),s.end(),'R')==n or count(s.begin(),s.end(),'L')==n )
   {
     cout<<-1<<endl;
     continue;
   }
   for(int i=0;i<n-1;i++)
   {
     string sb = s.substr(i,2);
     if(sb=="RL") {cout<<0<<endl;break;}
     if(sb=="LR")  {cout<<i+1<<endl; break;}
    }
 
 }
return 0;
}