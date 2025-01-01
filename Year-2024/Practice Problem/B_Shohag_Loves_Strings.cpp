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
        string s;
        cin >> s;
        ll n = s.size();
        bool found = false;
        string ans="-1";
        for (int i = 0; i < n; i++)
        {
            if (i+1<n && s[i] == s[i + 1])
            {
                ans = s.substr(i, 2);
                found = true;
                break;
            }

            // abc,arb , diffrent 3
            else if (i+2<n  && s[i] != s[i + 2] && s[i + 1] != s[i + 2])
                {
                    ans = s.substr(i, 3);
                     found =true;
                     break;
                }
              
        }
        cout<<ans<<endl;
    }
    return 0;
}