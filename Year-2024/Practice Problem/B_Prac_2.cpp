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
int Fact_digit_cnt(int n)
{
     if(n==0 || n==1) return 1;
     /*
    we know n! = 1*2*3*4*........*n
          log(n!)=log(1*2*3*4*........*n)
          log(n!)= log(1) + log(2) + log(3) + .....log(n)
    the number of digit in n! count : 
            d = floor(log(n!)) + 1;
    */
   double digit_sum = 0;
   for(int i=2;i<=n;i++)
   {
       digit_sum+=log10(i);
    }
    return floor(digit_sum) + 1;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
   cout<<Fact_digit_cnt(n)<<endl;
 
 }
return 0;
}