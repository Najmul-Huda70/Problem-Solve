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
vi arr(4);
for(int i=0;i<4;i++)
{
   cin>>arr[i];
 }
sort(arr.begin(),arr.end());
for(int i=1;i<6;i++)
{
   if(find(arr.begin(),arr.end(),i) == arr.end())
   {
    cout<<i<<endl;
    break;
   }
 }

return 0;
}