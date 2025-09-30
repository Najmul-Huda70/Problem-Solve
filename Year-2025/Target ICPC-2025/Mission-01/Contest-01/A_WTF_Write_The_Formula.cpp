/*
Author: Najmul Huda
Problem solve : 2025-09-29 22:07:26
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

void solve()
{   
    ll n;
    cin>>n;
    ll lcm=1;
    for(ll i=2;i<=10;i++) lcm =(lcm*i)/(__gcd(lcm,i));
    //cout<<lcm<<endl;
    ll ans=n/lcm;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    solve();
    return 0;
}