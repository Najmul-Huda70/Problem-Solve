// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_mafreq [key](v) mafreq[key] _element(all(v));
#define vec_minmafreq [key](v) minmafreq[key] _element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{  
    int n,m;
    cin>>n>>m;
    vi s(n),t(n);
    FOR(i,0,n-1){
        cin>>s[i];
    }
     FOR(i,0,n-1){
        cin>>t[i];
    }
    vector<double> scores(n);
     FOR(i,0,n-1){
        double score= 1.0/(t[i]-s[i]+1);
        scores[i]=score;
    }
  double sum=0;
   FOR(i,0,n-1){
       sum+=scores[i];
    }
    double ans= sum/n;
    cout<<ans<<endl;
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