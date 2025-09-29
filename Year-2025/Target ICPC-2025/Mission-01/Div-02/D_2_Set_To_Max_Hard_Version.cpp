/*
Author: Najmul Huda
Problem solve : 2025-09-28 17:38:03
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
class segmentTreeMax{
    public:
        int n;
        vi t;
    segmentTreeMax(int _n){
        n=_n;
        t.assign(4*n,-inf);
    }
    void built(int node,int b,int e,const vi &a){
        if(b==e){
            t[node]=a[b];
            return;
        }
        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply
        built(l,b,mid,a);
        built(r,mid+1,e,a);
        t[node]=max(t[l],t[r]);
    }
    void upd(int node,int b,int e,int i,int x){
        if(b>i or e<i) return;
        if(b==e and b==i) {
            t[node]=x;
        }
        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply
        upd(l,b,mid,i,x);
        upd(r,mid+1,e,i,x);
        t[node]=max(t[l],t[r]);
    }
    int query(int node,int b,int e,int i,int j){
        if(b>j or e<i) return -inf;
        if(b>=i and e<=j) return t[node];

        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply

        return max(query(l,b,mid,i,j),query(r,mid+1,e,i,j));
    }
};
class segmentTreeMin{
    public:
        int n;
        vi t;
    segmentTreeMin(int _n){
        n=_n;
        t.assign(4*n,inf);
    }
    void built(int node,int b,int e,const vi &a){
        if(b==e){
            t[node]=a[b];
            return;
        }
        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply
        built(l,b,mid,a);
        built(r,mid+1,e,a);
        t[node]=min(t[l],t[r]);
    }
    void upd(int node,int b,int e,int i,int x){
        if(b>i or e<i) return;
        if(b==e and b==i) {
            t[node]=x;
        }
        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply
        upd(l,b,mid,i,x);
        upd(r,mid+1,e,i,x);
        t[node]=min(t[l],t[r]);
    }
    int query(int node,int b,int e,int i,int j){
        if(b>j or e<i) return inf;
        if(b>=i and e<=j) return t[node];
        
        int mid=(b+e)>>1,l=node<<1,r=l|1; //>> - divide  << - multiply

        return min(query(l,b,mid,i,j),query(r,mid+1,e,i,j));
    }
};
void solve(){
    int n;cin>>n;
    vi s(n+1),f(n+1);
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    for(int i=1;i<=n;i++){
        cin>>f[i];
    }
    segmentTreeMax mx(n);
    segmentTreeMin mn(n);
    mx.built(1,1,n,s);
    mn.built(1,1,n,f);
    set<int>st[n+5];//set array
    for(int i=1;i<=n;i++) st[s[i]].insert(i);
      bool flag =true;
        for(int i=1;i<=n;i++)
        {
            if(s[i]==f[i]) continue;
            if(f[i]<s[i]) {
                no;return;//impossible
            }
            auto it=st[f[i]].upper_bound(i);
            if(it!=st[f[i]].end())
            {
                int MN=mn.query(1,1,n,i,*it),MX=mx.query(1,1,n,i,*it);
                if(MN>=MX) continue;
            }
            it=st[f[i]].lower_bound(i);
            if(it!=st[f[i]].begin())
            {
                --it;
                int MN=mn.query(1,1,n,*it,i),MX=mx.query(1,1,n,*it,i);
                if(MN>=MX) continue;
            }
            flag=false;
        }
        condition(flag);
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int testcase;
    cin>>testcase;
    while(testcase--){
        solve();
    }
    return 0;
}