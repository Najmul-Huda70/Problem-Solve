/*
Author: Najmul Huda
Problem solve : 2025-09-29 00:45:42
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
    //input
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //observation maximum change 3 step so 1<= k <=3
    if(k>1) k=k%2+2;

    for(int kk=0;kk<k;kk++)//kk loop O(3*(n+1))
    {
    int mp[n+1];
    for(int i=0;i<=n;i++) mp[i]=0;//initialized zero
    for(int i=0;i<n;i++) mp[a[i]]++; //cnt frequence
    int MEX=-1;//find MEX
    for(int i=0;i<=n;i++){
    if(mp[i]==0)
    {
    MEX=i;
    break;
    }
    }
    for(int i=0;i<n;i++) // itarate all element of array
    {
    if(mp[a[i]]>1) // if duplicate element
    {
        a[i]=MEX;
        continue;
    }
    a[i]=min(MEX,a[i]);
   }
   
    }
    ll s=0;//final array sum
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    cout<<s<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}