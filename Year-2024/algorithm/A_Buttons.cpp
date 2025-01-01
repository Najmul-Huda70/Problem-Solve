/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
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
const ll mod = 1e9,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t;cin>>t;
while(t--)
{
 ll a,b,c;
 cin>>a>>b>>c;
/*
if c is even number  c=10
 anna press button  c c c c c 
Katie press button  c c c c c

 => same same

 [
 so , if a is greater than b

 suppose, a=5  and b =4;
 anna press button  c c c c c 
 Katie press button c c c c 
 anna win(First)
 else 
 suppose, a=5  and b =5 or 7;
 anna press button  c c c c c 
 Katie press button c c c c c
 or, 
 anna press button  c c c c c 
 Katie press button c c c c c c c
 katie win(Second)
 
 ]
 else c%2 == 1 ,  c is not even
 suppose c=5;
 anna press button c c c 
katie press button c c
anna one button greater than katie
so,
if a>b or a=b anna win (First)
{
 example :
  a=5 b=4 
 anna press button c c c c c
katie press button c c c c
or,
 a=5 b=5 
 anna press button c c c c c
katie press button c c c c c
anna win cause anna has already one button extra
}
else 
{
suppose, a=5  and b = 7;

 anna press button  c c c c c 
 Katie press button c c c c c c c
 katie win(Second)
}
*/

 if(c%2==0)
 {
    cout<<(a>b ? "First":"Second")<<endl;
 }
 else
 {
    cout<<(a>=b ? "First":"Second")<<endl;
 }
 
}
return 0;
}