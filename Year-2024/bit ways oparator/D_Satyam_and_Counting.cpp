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
// double lenght(int x1,int y1,int x2,int y2)
// {
//     return sqrt(pow(abs(x1-x2),2) + pow(abs(y1-y2),2));
// }
// bool triangle(int x1,int y1,int x2,int y2,int x3,int y3)
// {
//     int area = abs(x1*y2 - x2*y1 + x2*y3 -x3*y2 + x3*y1-x1*y3); // 0.5 multiple ase kori nai
//    return area != 0;
// }
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   int n;
   cin>>n;
   set<pair<int,int>> st;
   for(int i=0;i<n;i++)
   {
      int x,y;
      cin>>x>>y;
     st.insert({x,y});
    }
    int sum1 = 0 , sum2 = 0;
 for(auto [x,y]:st)
 {
       if(st.find({x,1-y})!= st.end()) sum1+=n-2;// (x,0) ,(x,1)
       if(st.find({x-1,1-y})!= st.end() && st.find({x+1,1-y}) != st.end()) sum2++; // (x-1,0), (x+1,0),(x+1,y+1)
 }
sum1/=2;
int ans = sum1+sum2;
cout<<ans<<endl;
 }
return 0;
}