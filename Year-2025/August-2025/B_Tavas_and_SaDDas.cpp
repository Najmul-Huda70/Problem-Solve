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
const int N = 1e9 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
vi Lucky_numbers;
void Lucky_num(){
 for (int len = 1; len <= 9; len++) {
    for (int mask = 0; mask < (1 << len); mask++) {
      int num = 0;
      for (int i = 0; i < len; i++) {
        int d = mask >> i & 1 ? 7 : 4;
        num = num * 10 + d;
      }
      Lucky_numbers.push_back(num);
    }
  }
  stable_sort(Lucky_numbers.begin(),Lucky_numbers.end());
}
void solve()
{  
   int n;
cin>>n;
cout<<(find(Lucky_numbers.begin(),Lucky_numbers.end(),n)-Lucky_numbers.begin())+1<<endl;
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Lucky_num();
    
        solve();
    
    return 0;
}