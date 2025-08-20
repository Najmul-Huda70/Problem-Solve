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
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
int binary_search(vl dup,ll targate)
{
    int cnt=0;
    int low=0,high=dup.size()-1;
    while(low<=high)
    {
        int mid =(low+high)/2;
        if(dup[mid]<=targate)
        {
            cnt=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return cnt;
}
    
void solve(){
    int n;
    cin>>n;
    vl arr(n);
    map<int,vl>mp;//sorted map and no duplicate key
    FOR(i,0,n-1){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }
    vl preffix_sum;
    vl preffix_cnt;
    for(auto [val,v]:mp)
    {
        int si=v.size();
        int prSize=preffix_sum.size();
        if(prSize==0) preffix_sum.push_back(val*1LL*si),preffix_cnt.push_back(v.size());
        else preffix_sum.push_back(1LL*(val*1LL*si + preffix_sum[prSize-1])),preffix_cnt.push_back(v.size()+preffix_cnt[prSize-1]);
    }
    int m=preffix_sum.size();
    vi ans(m);
    vl marray;
    for(auto [val,v]:mp)
    {
        marray.push_back(val);
    }

   FOR(i,0,m-1){ 
     int cnt =binary_search(marray,preffix_sum[i]);
     bool flag=true;
     while(flag)
     {   if(cnt>=n-1) break;
        int cnt2=binary_search(marray,preffix_sum[cnt]);
        if(cnt==cnt2) flag=false;
        else cnt=cnt2;
     }
     ans[i]=preffix_cnt[cnt]-1;
   }
   vi final_ans(n,0);
   FOR(i,0,m-1)
   {
     for(auto idx:mp[marray[i]]){
            final_ans[idx]=ans[i];
     }
   }
   print(final_ans);
    
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
     cin >> T;
     //total time complexity = O(t*n*x*logn)
    while (T--)
    {
        solve();
    }
    return 0;
}