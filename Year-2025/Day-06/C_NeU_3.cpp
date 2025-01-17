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
 int n,m;
 cin>>n>>m;
 char arr[n][m];
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
     cin>>arr[i][j];
   }
  }
  bool flag = true;
  for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
     if(arr[i][j] == 'C' || arr[i][j]=='Y' || arr[i][j]=='M' )
     {
        flag = false;
        break;
     }
   }
  }
  cout<<(flag ? "#Black&White":"#Color");
   
return 0;
}