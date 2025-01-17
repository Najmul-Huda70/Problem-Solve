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
 double H,M;
 cin>>H>>M;
 double res =(11*M - 60*H)/2;
 if(res>0)cout<<fixed<<setprecision(7)<<min(res,360-res)<<endl;
 else cout<<fixed<<setprecision(7)<<res+360<<endl;
return 0;
}