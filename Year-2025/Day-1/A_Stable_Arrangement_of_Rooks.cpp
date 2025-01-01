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
   int n,k;
   cin>>n>>k;
 if(n!=1 && (n/2 + n%2)<k) {
    cout<<-1<<endl;
    continue;
 }
   char arr[n][n];
   memset(arr,'.',sizeof(arr));
   for(int i=0;i<n && k;i+=2)
   {
    arr[i][i] ='R';
    k--;
    }
 for(int i=0;i<n;i++)
 {
   for(int j=0;j<n;j++)
   {
    cout<<arr[i][j];
    }
    cout<<endl;
  }
  
 }

return 0;
}