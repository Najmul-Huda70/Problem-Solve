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
const int N=1e3+9;
const ll mod = 1e5 + 7,inf = 1e9;
int n,m;
// 2D matrix
ll arr[N][N];
int recursive_call(int i,int j)
{   // i,j er man matrix er bahire sole gele return -inf
   if(i>=n || j>=m ) return -inf;
   // maximum sum last e store hobe arr[n-1][m-1] index e tai return korsi arr[n-1][m-1]
   if(i==n-1 && j==m-1) return arr[i][j];
   //recursive function call kore i,j th index er down and right side move  korlam
   ll op1 =recursive_call(i+1,j); //move down i+1
   ll op2 =recursive_call(i,j+1);//move right j+1
   //last e return korbo op1/op2 er modde maximum value er shate arr[i][j] er sum korlam
   return arr[i][j] + max(op1,op2);
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 cin>>n>>m;
 for(int i=0;i<n;i++)
 {
  for(int j=0;j<m;j++)
  {
      cin>>arr[i][j];
   }
  }
  cout<<recursive_call(0,0)<<endl;
return 0;
}