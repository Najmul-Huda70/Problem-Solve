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
  vi arr(n+1);
  ll s=0;
  for(int i=1;i<=n;i++)
  {
    cin>>arr[i];
    s+=arr[i];
   }
   bool flag = true;
 if(s%n!=0) flag = false;
else {
     
     int X = s/n;
    for(int i=2;i<=n-1;i++)
    {
     
        if(arr[i-1]>X)
        {
             int k = arr[i-1]-X;
             arr[i-1] = X;
             arr[i+1]+=k;
        }
        else{
           int k =X-arr[i-1];
             arr[i-1] = X;
             arr[i+1]-=k;
        }
       
     }
     for(int i=1;i<=n;i++)
{
   if(arr[i]!=X) flag =false;
 }
     
}
// for(int i=1;i<=n;i++)
//      {
//        cout<<arr[i]<<" ";
//       }
//       cout<<endl;
//   cout<<n<<" "<<s<<endl;
cout<<(flag ? "YES":"NO")<<endl;
 }
return 0;
}