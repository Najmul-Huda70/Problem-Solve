/*
Author: Najmul Huda
Problem solve : 2025-09-26 23:43:14
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
    int n,k;
    cin>>n>>k;
    vi a(n);
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>a[i];
        freq[a[i]]++;
    }   
    // Observation-01
    // freq[v] for all value of v should be divisible by k
    bool flag =true;
    for(auto [v,cnt]:freq) 
    {
        if(cnt%k) {
            flag=false;
            break;
        }
    }
    // if flag is false . means observation-01 is false so print is 0
    if(flag==false){
        cout<<0<<endl;
        return;
    }
    //observation-02
    //each value apperse freq[v]/k times in each multiset in the optimal/awesome case
    //observation-03
    //subarray should be add <=freq[v]/k times.

    // apply sliding window technique-two pointer
    ll ans=0;
    unordered_map<int,int>mp;
    int r=-1;
    for(int l=0;l<n;l++){
        while(r<n-1){
            if(mp[a[r+1]]<freq[a[r+1]]/k)//awesome case
            {
                mp[a[r+1]]++;
                r++;
            } 
            else break;
        }
        ans+=(r-l+1);
        mp[a[l]]--;
    }
    cout<<ans<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)  solve();
    return 0;
}