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
const int N=1e5+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--)
 {
   int n,Red_Queen_pos_x,Red_Queen_pos_y,X = 0,Y = 0;
   cin>>n>>Red_Queen_pos_x>>Red_Queen_pos_y;
   string s;
   cin>>s;
   int i=0;
   bool found = false;
   while(!found && i<N)
   {
    if(X==Red_Queen_pos_x && Y==Red_Queen_pos_y) found=true;
    if(s[i]=='N') Y++;
    if(s[i]=='E') X++;
    if(s[i]=='S') Y--;
    if(s[i]=='W') X--;
   
    i++;
   }

 /*
 1. go north (represented by N), moving to (x,y+1);
 2. go east (represented by E), moving to (x+1,y);
 3. go south (represented by S), moving to (x,y−1); or
 4. go west (represented by W), moving to (x−1,y)
.
 */
cout<<(found ? "YES":"NO")<<endl;
 }
return 0;
}