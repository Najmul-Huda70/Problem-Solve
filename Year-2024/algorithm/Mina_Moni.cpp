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
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
  
    int n;
    cin >> n;
    int a[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    bool dp[n + 1][s + 1];
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
        dp[0][i] = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i - 1] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    vector<int> v;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (dp[i][j] == 1)
                v.push_back(j);
        }
    }
    int ans = INT_MAX;
    for (int val : v)
    {
        int s1 = val;
        int s2 = s - s1;
        ans = min(ans, abs(s1 - s2));
    }
    cout << ans << endl;
 }
    return 0;
}