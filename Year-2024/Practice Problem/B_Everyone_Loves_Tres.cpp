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
const int N=505;
const ll mod = 1e5 + 7,inf = 1e9;


int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
         int n;
         cin>>n;
         if(n==1 || n==3) cout<<-1<<endl;
         else if(n==2) cout<<66<<endl;
        else if(n==4) cout<<3366<<endl;
         else 
         {
            for(int i=0;i<n-5;i++)
         {
          cout<<3;
          }
          if(n%2==0) cout<<33366<<endl;
          else cout<<36366<<endl;
         }
    }

    return 0;
}
