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
// time comlexity O(2^n)
ll fibo(ll n)
{ 
    if(n==0 ) return 0;
    if(n==1) return 1;
    return (fibo(n-1)+fibo(n-2));
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 ll n;
 cin>>n;
 cout<<fibo(n)<<endl;
return 0;
}
/*
Example with n = 5:
The Fibonacci sequence starts with 0, 1, and then every number is the sum of the two preceding ones.

The function works like this:

fibo(5) → returns fibo(4) + fibo(3)
fibo(4) → returns fibo(3) + fibo(2)
fibo(3) → returns fibo(2) + fibo(1)
fibo(2) → returns fibo(1) + fibo(0)
fibo(1) → returns 1 (base case)
fibo(0) → returns 0 (base case)

Now the recursion unravels:

fibo(2) returns 1 + 0 = 1
fibo(3) returns 1 + 1 = 2
fibo(4) returns 2 + 1 = 3
fibo(5) returns 3 + 2 = 5
So, fibo(5) returns 5, which is the 5th Fibonacci number.

*/