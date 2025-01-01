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
// vi layer;
// void layerf()
// {
     
// layer.push_back(1);
// for(int i=3;i<=31;i+=2)
// {
//     int law = i*2 + (i-2)*2;
//     layer.push_back(law);
//  }
//  for(int i=1;i<layer.size();i++)
//  {
//     layer[i]+= layer[i-1];
//   }
  
// }
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
//  layerf();
 while(t--)
 {
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++)
    {
       cin>>v[i];

     }
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        int X = sqrt(sum);
        if(X*X == sum && X%2==1)
        {
           cnt++;
        }
     }
     cout<<cnt<<endl;
  // for(int i=0;i<layer.size();i++)
  // {
  //    cout<<layer[i]<<" ";
  //  }
  //  cout<<endl;
 }
return 0;
}