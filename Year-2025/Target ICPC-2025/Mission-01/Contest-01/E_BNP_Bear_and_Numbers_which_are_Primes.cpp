/*
Author: Najmul Huda
Problem solve : 2025-09-30 09:03:20
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
const int N = 1e7 + 9;
const int mod = 1e9 + 7, inf = 1e9;
int spf[N];
void sieve(){
    for(int i=0;i<N;i++) spf[i]=i;
    for(int i=2;i<N;i++){
        if(spf[i]==i){
            for(int j=i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}
void solve()
{   
    int n; cin >> n;
    int freq[N];
    for(int i=0;i<N;i++) freq[i]=0;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        while(val>1){
            int x = spf[val];
            freq[x]++;
            while(val%x==0){
                val/=x;
            }
        }

    }
    
    int preffix[N];
    preffix[0]=0;
    for(int i=1;i<N;i++){
        preffix[i]=preffix[i-1]+freq[i];
    }
    

    int q;
    cin>>q;

    while(q--){
       int l,r;
       cin>>l>>r;
       l=min(l,N-1);
       r=min(r,N-1);
       cout<<preffix[r] - preffix[l-1]<<endl;
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    sieve();
    solve();
    return 0;
}