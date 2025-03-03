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
   int a1,a2,a4,a5;
   cin>>a1>>a2>>a4>>a5;
   vi arr(3);
   int a3 = a4-a2;
   int ans=0;
   if(a3==a1+a2) ans++;
   if(a4==a2+a3) ans++;
   if(a5==a3+a4) ans++;
   arr.push_back(ans);
   ans=0;
   a3=a5-a4;
   if(a3==a1+a2) ans++;
   if(a4==a2+a3) ans++;
   if(a5==a3+a4) ans++;
   arr.push_back(ans);
    ans=0;
   a3=a1+a2;
   if(a3==a1+a2) ans++;
   if(a4==a2+a3) ans++;
   if(a5==a3+a4) ans++;
   arr.push_back(ans);
 sort(arr.rbegin(),arr.rend());

 cout<<arr[0]<<endl;
 }
return 0;
}