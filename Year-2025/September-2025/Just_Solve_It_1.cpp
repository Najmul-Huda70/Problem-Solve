/*
Author: Najmul Huda
Created: 2025-09-08 23:10:54
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
int spf[N];
//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     fr(i,2,N-1,1) spf[i]=i;//initialized
    fr(i,2,N-1,1){
        fr(j,i,N-1,i) spf[j]=min(spf[j],i);
    }
    int n; cin >> n; vi arr(n); fr(i,0,n-1,1) cin>>arr[i];
    for(auto val:arr){
    int originalVal=val;
    map<int,int>mp;
    int mn= INT_MAX;
    int mx=INT_MIN;
    while(val>1){
         int x=spf[val];
         mn=min(mn,x);
         mx=max(mx,x);
         while(val%x==0){
            mp[x]++;
            val/=x;
         }
    }
    int cnt=0;
    for(auto [_,c]:mp){
        cnt+=c;
    }
    vi div;
    ll sum=0;
    for(int i=1;i*i<=originalVal;i++){
        if(originalVal%i==0){
            div.push_back(i),sum+=i;
            if(originalVal/i!=i) div.push_back(originalVal/i),sum+=originalVal/i;
        }
    }
    cout<<mn<<" "<<mx<<" "<<mp.size()<<" "<<cnt<<" "<<div.size()<<" "<<sum<<endl;

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