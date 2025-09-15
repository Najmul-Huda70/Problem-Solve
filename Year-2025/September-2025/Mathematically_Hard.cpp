/*
Author: Najmul Huda
Created: 2025-09-09 19:34:02
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
const int N = 5e6 + 9;
const int mod = 1e9 + 7, inf = 1e9;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);
int cs=0;
vb primes(N+1,true);
vl primes_cnt(N+1);
void sieve(){
    primes[0]=primes[1]=false;
    fr(i,2,N,1){
        if(primes[i]){
            fr(j,i*i,N,i) primes[j]=false;
        }
    }
    primes_cnt[0]=0;
    fr(i,1,N,1){
        primes_cnt[i]=primes_cnt[i-1]+primes[i];
    }
}
void solve()
{  
    int a,b;
    cin>>a>>b;
    cout<<"Case "<<++cs<<": ";
    ll sum=0;
    fr(i,a,b,1){
        sum+=1LL*primes_cnt[i]*primes_cnt[i];
    }
    cout<<sum<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
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