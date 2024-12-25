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
ll solve(ll n) //suppose n=5
{
    if(n==1) return 1;
    return n*solve(n-1);
    
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
ll n;
cin>>n;
 cout<<solve(n)<<endl;
return 0;
}
/*
    Example with n = 5:
The recursion works like this:

solve(5) → returns 5 * solve(4)
solve(4) → returns 4 * solve(3)
solve(3) → returns 3 * solve(2)
solve(2) → returns 2 * solve(1)
solve(1) → returns 1 (base case reached)
Now the recursion unravels:

solve(2) returns 2 * 1 = 2
solve(3) returns 3 * 2 = 6
solve(4) returns 4 * 6 = 24
solve(5) returns 5 * 24 = 120
So, solve(5) returns 120, which is the factorial of 5.
    
    */