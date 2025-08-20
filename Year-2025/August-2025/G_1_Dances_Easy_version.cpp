// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(a) a.begin(),a.end()
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
bool condition_check(int k,vi a,vi b){
    //remove index
    FOR(i,0,k-1){
        a.pop_back();
        b.pop_back();
    }
    reverse(all(b));
    //condition a[i]<b[i]
    FOR(i,0,a.size()-1){
        if(a[i]>=b[i]) return false;
    }
return true;
}
void solve()
{  
   int n;
cin>>n;
vi a(n),b(n);
FOR(i,0,n-1)
  {
  cin>>a[i];
  }
FOR(i,0,n-1)
  {
  cin>>b[i];
  }
sort(all(a));
sort(all(b),greater<int>());

int low=0,high=n;

while(low<high){
    int mid =(low+high)/2;
    if(condition_check(mid,a,b)){
        high=mid;
    }
    else {
        low=mid+1;
    }
}
cout<<low<<endl;
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