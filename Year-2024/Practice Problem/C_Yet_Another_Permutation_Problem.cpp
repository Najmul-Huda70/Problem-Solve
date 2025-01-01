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
     bool arr[n+1];
     for(int i=1;i<=n;i++)
     {
       arr[i] = true;
      }
     for(int i=1;i<=n/2;i++)
     {  int j=i;
         while(j<=n)
     {
        if(arr[j])
        {
            arr[j]= false;
        cout<<j<<" ";
        }
        j=j*2;
     }   
    }
    for(int i=1;i<=n;i++)
    {
       if(arr[i])
       {
          cout<<i<<" ";
       }
     }
     
   cout<<endl;
 }
return 0;
}