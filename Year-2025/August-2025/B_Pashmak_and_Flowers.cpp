// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(),arr.end()
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
const ll mod = 1e9 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}

void solve()
{  
    int n;
    cin>>n;
    vl arr(n);
    map<ll,ll>mp;
    FOR(i,0,n-1)
    {
    cin>>arr[i];
    mp[arr[i]]++;
    }
    ll mx =*max_element(all(arr));
    ll mn =*min_element(all(arr));
    ll diff=mx-mn;
    if(diff==0) {
        cout<<diff<<" "<<1LL*((1LL*n*(n-1))/2)<<endl;
        return;
    }
    ll nCp =0;
    //cout<<"MP : "<<endl;
    for(auto [val,cnt]:mp){
        if (mp.count(val + diff)) {
            nCp += 1LL * cnt * mp[val + diff];
        }
        //cout<<val<<" "<<cnt<<endl;
    }

    //cout<<"output : "<<endl;
    cout<<diff<<" "<<nCp<<endl;
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        solve();
    
    return 0;
}