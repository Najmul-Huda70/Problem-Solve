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
   int n,m;// n holo operation number & m length of square stamp
   cin>>n>>m;
   vector<pair<int,int>>op;
   for(int i=0;i<n;i++)
   {
      int x,y;
      cin>>x>>y;
      op.push_back({x,y});
    }
    for(int i=1;i<n;i++)
    {
       op[i].first+=op[i-1].first;
       op[i].second += op[i-1].second;
     }
    //  for(auto [x,y]: op)
    //  {
    //    cout<<x<<" "<<y<<endl;
    //   }
     int perimeter = 4*n*m;
     for(int i=1;i<n;i++)
     {
         int xDistance =op[i-1].first+m-op[i].first ;
         int yDistance =op[i-1].second+m-op[i].second ;
         perimeter -= 2*(xDistance+yDistance);

      }
      cout<<perimeter<<endl;
 
 }
return 0;
}