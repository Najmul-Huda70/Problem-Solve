// s.i.snajmulhuda2002
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e9;
const ll mod = 1e5 + 7, inf = 1e9;
// bool isPrime[N];
// void sieve()
// {
//     memset(isPrime,true,sizeof(isPrime));
//     isPrime[0]=isPrime[1] = false;
//     for(int i=2;i*i<=N;i++)
//     {
//       if(isPrime[i])
//       {
//         for(int j=i*i;j<=N;j+=i)
//         {
//            isPrime[j]= false;
//          }
//       }
//      }
// }
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    // sieve();
    // cout<<__gcd(5,10)<<endl;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
       if(b%a==0) {
            ll x = (b*b)/a;
            cout<< x << endl;
        }
        else
        {
            ll g = __gcd(a,b);
 
            ll ans = (a*b)/g;
 
            cout << ans << endl;
        }
    }
    return 0;
}