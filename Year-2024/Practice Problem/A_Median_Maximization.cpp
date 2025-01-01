//s.i.snajmulhuda2002
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
 int arr[N];

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    int n,s;
    cin>>n>>s;
    // if(n==1) 
    // {
    //     cout<<s<<endl;
    //     continue;
    // }
    // if(n==2)
    // {   int ss= s/2 + s%2;
    //      cout<<s-ss<<endl;
    //      continue;
    // }
    // if(n/2>s) 
    // {
    //     cout<<0<<endl;
    //      continue;
    // }

    // int Median_pos = (n/2) + n%2;
    // int Median_val=s/Median_pos;
    cout<<s/((n/2) + 1)<<endl;
 }
return 0;
}