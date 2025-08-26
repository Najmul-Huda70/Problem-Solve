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
vl spf(N);
vb visited(N,true);
void sieve(){
    visited[0]=false;
    visited[1]=false;
    spf[0]=0;
    spf[1]=1;
    FOR(i,2,N)
    {
        if(visited[i]){
            spf[i]=i;
            for(int j=2*i;j<=N;j+=i){
                spf[j]=i;
                visited[j]=false;
            }  
             
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    int T;
     cin >> T;
   FOR(k,1,T)
    {
         int m,n;
   cin>>m>>n;
   vi m_primes;
   while(m>1){
    int p=spf[m];
   m_primes.push_back(p);
   while(m%p==0){
    m/=p;
   }
   }
   ll ans=LLONG_MAX;
   for(auto p:m_primes){
    ll cnt=0;
    FOR(i,1,n){
        int x =i;
        while(x%p==0){
            cnt++;
            x/=p;
        }
    }
    ans=min(ans,cnt);
   }
   cout<<"Case "<<k<<":\n"<<ans<<endl;

    }
    return 0;
}