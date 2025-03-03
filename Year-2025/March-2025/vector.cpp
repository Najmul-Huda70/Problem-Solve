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
   int n;
   cin>>n;
//    vector<int>arr;
//    for(int i=0;i<n;i++)
//    {
//      int val;
//      cin>>val;
//      arr.push_back(val);
//     }
   vector<pair<int,int>> arr;
   for(int i=0;i<n;i++)
   {
    int a,b;
    cin>>a>>b;
    arr.push_back({a,b});
    }
    //descending order
 // sort(arr.begin(),arr.end(),greater<int>());
 cout<< endl;
 //first element ascending order if first are equal second are ascending order
// sort(arr.begin(),arr.end());

//first element ascending order but equal part second descenfing order
sort(arr.begin(),arr.end(),[](pair<int,int>a,pair<int,int>b){
    if(a.first==b.first) return a.second>b.second;
return a.first<b.first;});

      for(int i=0;i<n;i++)
      {
       cout<<arr[i].first<<" "<<arr[i].second<<endl;
       }
    cout<< endl;
 
    
 }
return 0;
}