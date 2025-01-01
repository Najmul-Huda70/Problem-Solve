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
   if(n==1)
   {
    cout<<"1"<<endl;
    continue;
   }
   vs v ={"169","196","961"};
   while(v.size()<n)
   {
       for(int i=0;i<v.size();i++)
       {
          v[i] +="00";
        }
        string num1 ="1";
        string num2 ="9";
        int x = v.size();
        for(int i=0;i<(x-1)/2;i++)
        {
          num1+='0';
          num2+='0';
         }
         num1+='6';
         num2+='6';
         for(int i=0;i<(x-1)/2;i++)
        {
          num1+='0';
          num2+='0';
         }
         num1+='9';
         num2+='1';
     v.push_back(num1);
     v.push_back(num2);
   }
   for(int i=0;i<n;i++)
   {
      cout<<v[i]<<endl;
    }
   
 }
return 0;
}