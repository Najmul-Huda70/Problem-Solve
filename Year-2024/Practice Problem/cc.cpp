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
 int t;
 cin>>t;
 for(int i = 1;i<=t;i++)
 {
   int a,b,c;
   cin>>a>>b>>c;
   int arr[3];
   arr[0] = a;
   arr[1] = b;
   arr[2] = c;
   sort(arr,arr+3);
   bool flag = false;
   if(arr[2]==6 && arr[0]==1 && arr[1]==1) flag=true;
   if(arr[0]==1 && arr[1]==2 && arr[2] == 4) flag=true;
   if(arr[0]==3 && arr[1]==3 && arr[2] == 3) flag=true;
   if(arr[0]==1 && arr[1]==3 && arr[2] == 4) flag =true;
   if(arr[0]==2 && arr[1]==2 && arr[2] == 2) flag =true;
   if(arr[0]==0 && arr[1]==4 && arr[2] == 4) flag =true;
    
   cout<<"Case "<<i<<" : ";
   cout<<(flag ? "perfectus":"invalidum")<<endl;
   flag =false;
 }
return 0;
}