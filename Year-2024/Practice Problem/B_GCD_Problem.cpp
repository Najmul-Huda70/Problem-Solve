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
bool isPrime[N];
void prime()
{
    memset(isPrime,true,sizeof(isPrime));
    isPrime[0] =isPrime[1]= false;
    for(int i=2;i*i<N;i++)
    {
       if(isPrime[i])
       {
           for(int j=i*i;j<N;j+=i)
           {
             isPrime[j] =false;
            }
       }
     }
     
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 prime();
 while(t--)
 {
   int n;
   cin>>n;
   if(n%2==0) 
   {   
    //cout<<__gcd(2,n-3)<<endl;
      cout<<2<<" "<<n-3<<" "<<1<<endl;
   }
   else{
         
          n--;
          for(int i=2;i<N;i++)
          {
             if(isPrime[i] && (n-i)%i != 0)
             {
                 cout<<i<<" "<<n-i<<" "<<1<<endl;
                 break;
             }
           }
   }
 }
return 0;
}