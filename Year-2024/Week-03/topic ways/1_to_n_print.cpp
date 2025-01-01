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
const ll mod = 1e5 + 7,inf = 1e9;
int solve(int n) //suppose n=5
{
    if(n==0) return 0;
    solve(n-1);
    /* 
   waiting  solve(5)
     waiting  solve(4)
       waiting  solve(3)
         waiting  solve(2)
           waiting  solve(1)
    when n==0 return and print start 1,2,3,4,5
    */
    cout<<n<<" ";
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
int n;cin>>n;
 solve(n);
return 0;
}