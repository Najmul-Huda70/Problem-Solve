/*
Author: Najmul Huda
Problem solve : 2025-09-29 23:04:26
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
const int mod = 1e9 + 7;
const ll  inf = 1e9;
int TrailingZeros(int n){
    int ans=0;
    while(n){
        n/=5;
        ans+=n;
    }
    return ans;
}
void solve()
{   
    int m; cin>>m;
    int low=0,high=5*(m+1); //high = arekta beshi zeros er modde pawa jabe 5*(m+1)
    while(low<high){
        int mid =(low+high)/2;
       if(TrailingZeros(mid)>=m) high=mid;
       else low=mid+1;
    }
    if(TrailingZeros(low)!=m){
        cout<<0<<endl;
        return;
    }
    cout<<5<<endl;
    for(int i=0;i<5;i++){
        cout<<low++<<" ";
    }
    cout<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
        solve();
    return 0;
}