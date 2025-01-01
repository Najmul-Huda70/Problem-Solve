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
    int n,k;
    cin>>n>>k;

   vi arr(n);
   ll product = 1;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     product *=arr[i];
    }
    int reVal = 2023/product;
  if(2023==product*reVal)
  { 
    cout<<"YES"<<endl;
    if(reVal==1) 
    {
         for(int i=1;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
    if(reVal==7 && k>=1) 
    {
         cout<<7<<" ";
         for(int i=2;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
    else if(reVal==17 && k>=1)
    {
         cout<<17<<" ";
         for(int i=2;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
    else if(reVal==119)
    {
        if(k==1) {cout<<"119"<<endl;continue;}
         if(k>=2) cout<<"7 17 ";
         for(int i=3;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
    else if(reVal==289)
    {
        if(k==1) {cout<<"289"<<endl;continue;}
         cout<<"17 17 ";
         for(int i=3;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
    else if(reVal==2023)
    {
        if(k==1) {cout<<"2023"<<endl;continue;}
        if(k==2) {cout<<"17 119"<<endl;continue;}
        cout<<"7 17 17 ";
         for(int i=4;i<=k;i++)
         {
          cout<<1<<" ";
          }
          cout<<endl;
    }
  }
  else cout<<"NO"<<endl;

 }
return 0;
}