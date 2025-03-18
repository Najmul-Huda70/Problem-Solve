// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
// int lcm(int a, int b)
// {
//     return (a * b) / (__gcd(a, b));
// }
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // int ans = INT_MAX;
        // int x, y;
        // for (int i = 1; i <= n / 2; i++)
        // {
        //     int a = i;
        //     int b = n - a;
        //     if (ans > lcm(a, b))
        //     {
        //         ans = lcm(a, b);
        //         x = a, y = b;
        //     }
        // }

        ll x, y;
      
            x = 1;
            // x = 1, y = n - 1;
            for (ll i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    x = n / i; break;
                }
            }
          
        
        cout << x << " " << 1LL * (n - x) << endl;
    }
    return 0;
}