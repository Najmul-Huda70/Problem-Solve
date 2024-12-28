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
int segmen_cnt[10];
void segmentSet()
{
    segmen_cnt[0]=6;
    segmen_cnt[1]=2;
    segmen_cnt[2]=5;
    segmen_cnt[3]=5;
    segmen_cnt[4]=4;
    segmen_cnt[5]=5;
    segmen_cnt[6]=6;
    segmen_cnt[7]=3;
    segmen_cnt[8]=7;
    segmen_cnt[9]=6;
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 segmentSet();
 int first,last;
 cin>>first>>last;//10 15
 ll cnt=0;
 for(int i=first;i<=last;i++)
 {   int l=i;
    while(l>0)
    {
         cnt+=segmen_cnt[l%10];
         l/=10;
    }
  }
cout<<cnt<<endl;
return 0;
}