/*
Author: Najmul Huda
Created: 2025-09-07 21:23:05
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
const int mod = 1e9 + 7, inf = 1e18;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);

void solve()
{  
    ll a,b;
    cin>>a>>b;
    if(a%2==1 and b%2==1){
        cout<<1LL*a*b+1<<endl;
        return;
    }
    // jodi b odd a even 
    if(a%2==0 and b%2==1)
    {
        cout<<-1<<endl;
        return;
    }
   ll temp=b;//b even
   
if(a%2==1 and ((temp>>1)%2==1)) cout<<-1<<endl;
else{
     ll ans=LLONG_MIN;
     ll x;
     if(a%2==1){
        x=1LL*a*2 + b/2;
     }
     else x= a + b;
     ll  y =a*(b/2) + 2;
     ans=max({ans,x,y});
     cout<<ans<<endl;
}
// cout<<"6>>1 : ";
// cout<<(6>>1)<<endl;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll T;
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