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
 int n;
 cin>>n;
 // find least significant bit 
 // suppose n = 7 convert bit 111   LSB = 1
 // n AND 1 
 /*
7 = 111       6 = 110
  & 001         & 001
 ---------     ----------
    001 = 1       000 = 0  last digit
 */
 int ans = n&1;
 cout<<ans<<endl;
return 0;
}