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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vl a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, a[i]});
        }
        sort(v.begin(), v.end());
        ll cost = 0LL;
        int nn = n;
        int bonus = 0;
        for (ll i = 0; i < n; i++)
        {
            if (nn == 0)
                break;
            if (bonus <= 0 || k <= v[i].first)
            {
                nn--;
                cost += 1LL * k;
                // cout<<cost<<endl;
            }
            else
                bonus--;
            if (nn == 0)
                break;
            if (nn >= v[i].second)
            {
                if (k <= v[i].first)
                {
                    nn -= v[i].second;
                    //bonus += v[i].second;
                    cost += 1LL * k * v[i].second;
                }
                else
                {
                    nn -= v[i].second;
                    bonus += v[i].second;
                    cost += 1LL * v[i].first * v[i].second;
                }
                // cout<<cost<<endl;
            }
            else
            {
               if(k<=v[i].first)
               {
                cost += 1LL * k * nn; 
               }
              else  {cost += 1LL * v[i].first * nn;}
                // cout<<cost<<endl;
                nn -= nn;
                bonus += nn;
            }
        }
        // for(auto [ar,br]:v) cout<<ar<<" "<<br<<endl;
        cout << cost << endl;
    }
    return 0;
}