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
const int N = 2e5 + 9;
const ll mod = 1e9 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
//DP
//Recursive function
//combination 
int dp[N][3];
int n,l,r;
// count of numbers of i from 1 to n such that i%3=k
int count(int n,int k){
    if(k==0) return n/3;
    else if(k==1) return n/3 + (n%3>=1);
    else if(k==2) return n/3 + (n%3>=2);
}
int count_ways(int i,int sum){
    if(i==n+1){
        return sum==0;
    }
    int &ans=dp[i][sum];
    if(ans != -1) return ans;
    ans=0;
    FOR(k,0,2){
        ans+=1LL*count_ways(i+1,(sum+k)%3)*(count(r,k)-count(l-1,k))%mod;
        ans%=mod;
    }
    return ans;
}
void solve()
{  
cin>>n>>l>>r;
cout<<count_ways(1,0)<<endl;
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SET(dp,-1);
        solve();
    
    return 0;
}