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
int arr[51];
void fibonacci()
{
    arr[0] = 1;
    int first = 0;
    int secound = 1;
   for(int i=1;i<51;i++)
   { 
     int third=first + secound;
      arr[i]=third;
       first =secound;
      secound =third;
     

    }
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 fibonacci();
 int n;
 cin>>n;
 n--;
//  for(int i=0;i<51;i++)
//  {
//   cout<<arr[i]<<" ";
//   }
//   cout<<endl;
 cout<<arr[n]<<endl;
return 0;
}