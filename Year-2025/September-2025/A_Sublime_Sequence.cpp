/*
Author: Najmul Huda
Problem solve : 2025-09-15 07:15:36
*/
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
vb is_prime(N+1,true);
vi spf(N+1);
vi primes;
//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
void sieve();
vl divisors(ll a);
bool isPrime(ll n);
unordered_map<ll,ll> prime_factorization(ll n);
bool divisibility(string a,int b);
void solve()
{  
    int x,n;
    cin>>x>>n;
    cout<<(n&1 ? x:0)<<endl;
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
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void sieve(){
    fr(i,0,N,1) spf[i]=i;
    is_prime[0]=is_prime[1]=false;
    fr(i,2,N,1){
        if(is_prime[i]){
            fr(j,i*i,N,i){
                if(is_prime[j]){
                    is_prime[j]=false;
                    spf[j]=min(spf[j],i);
                }
            }
        }
    }
    fr(i,2,N,1) {
        if(is_prime[i]){
            primes.push_back(i);
        }
    }

}
vl divisors(ll a){
    vl div;
    for(ll i=1;1LL*i*i<=a;i++){
        if(a%i==0){
            div.push_back(i);
            if(a/i != i) div.push_back(a/i);
        }
    }
    sort(all(div));
    return div;
}
bool isPrime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
unordered_map<ll,ll> prime_factorization(ll n){
    unordered_map<ll,ll>mp;
    while(n>1){
        ll x =spf[n];
        while(n%x==0){
            n/=x;
            mp[x]++;
        } 
    }
    return mp;
}
bool divisibility(string a,int b){
    int ans=0;
    fr(i,0,a.size(),1){
        ans=(ans*10LL%b + (a[i]-'0'))%b;
    }
    return ans==0;
}