// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
const int N = 1e5 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int divisors[N];
void sieve()
{
   memset(divisors,0,sizeof(divisors));
   for(int i=2;i<N;i++)
   {
       if(divisors[i]==0)
       {
         for(int j=i;j<N;j+=i)
         {
            divisors[j]++;
          }
       }
    }
   
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sieve();
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 6; i <= n; i++)
    {
        if(divisors[i]==2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}