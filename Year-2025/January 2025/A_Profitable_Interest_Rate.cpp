//Najmul Huda
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
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
    int n,k;
    cin>>n>>k;
    if(n>k) cout<<n<<endl;

    else 
    {
        while(n<k)
        {
            if(n<0 || k<0) break;
            int temp = k-n; // 19
            if(temp%2==1) temp++; //20
            n-=(temp/2);//10
            k-=temp;//20
        }
        if(n==k && n>0 && k>0){
            cout<<n<<endl;
        }
        else cout<<0<<endl;
    }
 
 }
return 0;
}