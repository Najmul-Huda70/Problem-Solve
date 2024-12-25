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
//Dynamic Programming (DP) with Memoization
int dp[N];
// time/space comlexity O(n)
ll fibo(ll n)
{ 
    if(n==0 ) return 0;
    if(n==1) return 1;
    if(dp[n]!= -1) return dp[n];
    return dp[n]= (fibo(n-1)+fibo(n-2));
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 ll n;
 cin>>n;
 memset(dp,-1,sizeof(dp));
 cout<<fibo(n)<<endl;
return 0;
}
/*
fibo(5)
  fibo(4)
    fibo(3)
      fibo(2)
        fibo(1) → return 1 (base case)
        fibo(0) → return 0 (base case)
      fibo(2) → return 1 (from dp)
    fibo(3) → return 2 (from dp)
  fibo(4) → return 3 (from dp)
fibo(5) → return 5 (from dp)

*/