/*
Author: Najmul Huda
Problem solve : 2025-09-27 16:33:05
*/
#include <bits/stdc++.h>
using namespace std;

#define SET(arr, a) memset(arr, a, sizeof(arr))
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
unordered_map<int,int>divs;
void add_div(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divs[i]++;
            if(n/i != i) divs[n/i]++;
        }
    }
}
int mx_cnt_div(int n,int g){
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(__gcd(i,g) == g and i>g) cnt=max(cnt,divs[i]);
            if(__gcd((n/i),g)==g and (n/i)>g) cnt=max(cnt,divs[n/i]);
        }
    }
    return cnt;
}
void solve()
{   
    int n; cin>>n; vi a(n); for(int i=0;i<n;i++){cin>>a[i];}
    divs.clear();
    vi prefix(n);

    prefix[0]=a[0]; vi ans(n,0); add_div(a[0]);
    for(int i=1;i<n;i++){
        add_div(a[i]);
        prefix[i]=__gcd(prefix[i-1],a[i]);
        if(prefix[i-1] != prefix[i]){
            ans[i]=i;
        }
        else{
            ans[i]=max(ans[i-1],mx_cnt_div(a[i],prefix[i-1]));
        }
    }
    //observation-01:
    //if all values in preffix[0,1,2,.........i] are the same than ans[i]=0;
    //observation-02:
    //if gcd[0,1,2,3,4,....(i-1)] != gcd[0,1,2,3,4....i] , than ans[i]=i
    //observation-03:
    //ans[i]=max(freq of the numbers with a particular divisors>gcd,ans[i-1])
    //observation -04:
    //either the new element added to the preffix changes the answer or not
    //ans[i]=max(ans[i-1],freq of some values of divisors of a[i]>gcd)

    //print
    for(auto v:ans) cout<<v<<" ";
    cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}