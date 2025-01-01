//Najmul_huda
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
 int t,cs=0;cin>>t;
 while(t--)
 {
   int n,k;
   cin>>n>>k;
   vi arr(n);
   //map<int,int>mp;
   //ll Tsum = 0;
   priority_queue<pair<int,int>>pq;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     //Tsum+=arr[i];
     if(arr[i]<0) pq.push({-arr[i],i});
    }
    // if(mp.empty()) 
    // {
    //      cout<<"Case "<<++cs<<": "<<Tsum<<endl;
    //      continue;
    // }
   //for(auto [val,index] : mp) cout<<val<<" "<<index<<endl;
//   int p = 1;
//    for(auto [val , index] : mp) 
//    { 
//     if(p>k) break;
//      //Tsum+=arr[index];
//      arr[index] = 0;
//    p++;
//    }

 for (int i = 0; i < k && !pq.empty(); i++) {
            auto [val, idx] = pq.top();
            pq.pop();
            arr[idx] = 0;
        }

//    for(int i=0;i<n;i++)
//    {
//      cout<<arr[i]<<" ";
//     }
//     cout<<endl;


// ekn Kadane's Algorithm use korlam
ll mxSum = LLONG_MIN;
ll curSum = 0;
for(int i=0;i<n;i++)
{
     curSum+=arr[i];
     mxSum = max(mxSum,curSum);
     if(curSum<0) curSum=0;
 }
cout<<"Case "<<++cs<<": "<<mxSum<<endl;
 }
return 0;
}