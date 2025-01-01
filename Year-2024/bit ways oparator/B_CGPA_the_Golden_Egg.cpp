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
double grade_point(double marks)
{
  if(marks>=80.0) return 4.00;
  else if(marks>=75.0) return 3.75;
  else if(marks>=70.0) return 3.50;
  else if(marks>=65.0) return 3.25;
  else if(marks>=60.0) return 3.00;
  else if(marks>=55.0) return 2.75;
  else if(marks>=50.0) return 2.50;
  else if(marks>=45.0) return 2.25;
  else if(marks>=40.0) return 2.00;
  else return -1.00;

}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t,cs=0;cin>>t;
 
 while(t--)
 {
   int crs; cin>>crs;
   vector<pair<double,double>>v;
   double total_cre =0;
  while(crs--)
  {
   double m,cre;
   cin>>m>>cre;
   v.push_back({grade_point(m),cre});
   total_cre+=cre;
  }
  double lov = 0;
 for(auto [gp,cre] : v)
 {
    lov += gp*cre ;
//cout<<gp<<" "<<cre<<endl;
 }
 int cnt =0;
 for(auto [gp,cre] : v) if(gp==-1.0) cnt++;
 if(cnt>0) 
 {
    cout<<"Case "<<++cs<<": Sorry, you have failed in "<<cnt<<" courses!"<<endl;
 }
 else{
    double ans = lov/total_cre;
 cout<<"Case "<<++cs<<": "<<fixed<<setprecision(2)<<ans<<endl;
 }
 }
return 0;
}