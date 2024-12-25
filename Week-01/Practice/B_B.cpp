/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
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
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    bool flag = false;
    unordered_map<int, pair<int, int>> mp;
    for (int x = 0; x< n; x++)
    {
        for (int y = x + 1; y < n; y++)
        {
             int XOR_xy = v[x]^v[y];
             if(mp.find(XOR_xy) != mp.end())
             {
                      flag = true;
                      break;
             }
            else  mp[XOR_xy] = {x,y};
        }
    }

    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}