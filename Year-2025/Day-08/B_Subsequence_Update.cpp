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
int32_t main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        vl arr(a);

        for (ll i = 0; i < a; i++)
        {
            cin >> arr[i];
        }


        vl p1, p2;
        for (ll i = 0; i < c; i++)
        {
            p1.push_back(arr[i]);
        }

        for (ll i = b-1; i < a; i++)
        {
            p2.push_back(arr[i]);
        }

        stable_sort(p1.begin(), p1.end());
        stable_sort(p2.begin(), p2.end());

         ll dist = c - b + 1;
        ll S= 0, s = 0;
        for (ll i = 0; i < dist; i++)
        {
            if (i < p1.size()) S += p1[i];
           
            if (i < p2.size())  s += p2[i];
          
        }

        cout << min(S, s) << "\n";
    }

    return 0;
}