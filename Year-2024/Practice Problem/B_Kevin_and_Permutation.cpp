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
        int n, k;
        cin >> n >> k;
        int mn = 1;
        int mx = n;
        int loop = (n+k-1)/k ;
        for(int l=1;l<=loop;l++)
       {
            for (int i = 1; i <= k; i++)
            {
                if(mn==mx) 
                {
                    cout<<mn;
                    break;
                }
                if (i == k)
                {
                    cout << mn << " ";
                    mn++;
                }

                else
                {
                    cout << mx << " ";
                    mx--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}