#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (int i = a; i <= b; i += increment)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define all(arr) arr.begin(), arr.end()
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const int mod = 1e9 + 7, inf = 1e9;

void solve()
{  
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    vi X(n),Y(m);
    fr(i,0,n-1,1) cin>>X[i];
    fr(j,0,m-1,1) cin>>Y[j];
    cout<<n+m<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
