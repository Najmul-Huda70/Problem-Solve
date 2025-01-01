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
const int N=1e6+9;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--)
{
   ll l,r;
cin>>l>>r;
if(l==r) 
{
    cout<<1<<endl;
}
else 
{
    ll k=1;
ll first_value=l;
ll second_value=first_value+k;
vl v;
v.push_back(first_value);
v.push_back(second_value);
 while(second_value<=r)
 { 
     first_value=second_value;
    k++;
    second_value=first_value+k;

 if(second_value<=r)   v.push_back(second_value);
else break;
 }
//   for(int i=0;i<v.size();i++)
//   {
//    cout<<v[i]<<' ';
//    }
cout<<v.size()<<endl;
   v.clear();
}
}

return 0;
}