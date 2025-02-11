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
   ll n,m,val;
   cin>>n>>m;
   vl a(n);
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
    }

long long b;
cin >> b; 

long long cur_flag = LLONG_MIN; 
bool flag = true;  

for (int i = 0; i < n; i++)
{
    long long cand1 = LLONG_MAX;

    if (a[i] >= cur_flag)
        cand1 = a[i];

    long long target = cur_flag + a[i];
    long long cand2 = LLONG_MAX;

    if (b >= target)
    {
        cand2 = b - a[i];
    }

    long long chosen = min(cand1, cand2);
    if (chosen == LLONG_MAX)
    {
        flag = false; 
        break;
    }

    cur_flag = chosen; 
}

if (flag)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
    // cout<<(flag ? "YES":"NO")<< endl;
//   for(int i=0;i<n;i++)
//   {
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
 }
return 0;
}



