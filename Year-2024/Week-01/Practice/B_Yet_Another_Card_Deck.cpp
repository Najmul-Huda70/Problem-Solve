/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
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
 int n,q;
 cin>>n>>q;
 deque<int> dq;
 for(int i=0;i<n;i++)
 {
    int x;
    cin>>x;
    dq.push_back(x);
  }
  vi v;
  while(q--)
  {
     int val;
     cin>>val;
     int j=0;
     for(auto V:dq)
     {  j++;
       if(val==V) 
       {
        v.push_back(j);
        dq.erase(dq.begin()+j-1);
        dq.push_front(val);
        break;
       }
     }
     
  }
  for(auto ans:v) cout<<ans<<" ";
  cout<<endl;
return 0;
}