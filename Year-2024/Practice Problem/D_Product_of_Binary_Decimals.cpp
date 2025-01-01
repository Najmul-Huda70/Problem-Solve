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
    int k=n;
    bool flag = false;
    while(k)
    {
        int digit = k%10;
        if(digit>1) 
        {
            flag = true;
            break;
        }
        else{
            k/=10;
        }
       
    }
    if(!flag) cout<<"YES"<<endl;
   else 
   {
     while(n!=0 && n%10==0) n/=10;
    while(n!=0 && n%11==0) n/=11;
    while(n!=0 && n%100==0) n/=100;
    while(n!=0 && n%101==0) n/=101;
    while(n!=0 && n%111==0) n/=111;
    while(n!=0 && n%1000==0) n/=1000;
    while(n!=0 && n%1001==0) n/=1001;
    while(n!=0 && n%1010==0) n/=1010;
    while(n!=0 && n%1011==0) n/=1011;
    while(n!=0 && n%1100==0) n/=1100;
    while(n!=0 && n%1101==0) n/=1101;
    while(n!=0 && n%1110==0) n/=1110;
    while(n!=0 && n%1111==0) n/=1111;
   cout<<(n==1 ? "YES":"NO")<<endl;
   }
 
 }
return 0;
}