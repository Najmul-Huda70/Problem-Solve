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
 string s;
 cin>>s;
 vs card5(5);
 for(int i=0;i<5;i++)
 {
    cin>>card5[i];
  }
//   for(int i=0;i<5;i++)
//   {
//     cout<<card5[i][0]<<" ";
//    }
  bool flag = false;
  for(int i=0;i<5;i++)
 {
    if(card5[i][0]==s[0] || card5[i][1]==s[1])
    {
        flag=true;
        break;
    }
  }
 cout<<(flag?"YES":"NO")<<endl;

return 0;
}