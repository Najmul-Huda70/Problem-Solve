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
   vi arr(n);
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
    }
    vi sortArray = arr;
    sort(sortArray.begin(),sortArray.end());
   
       for(int i=0;i<n;i++)
       {
           for(int j=1;j<n-1;j++)
        {
           //if(arr[j-1]<arr[j] && arr[j]<arr[j++]) continue;
            if(arr[j-1]<arr[j] && arr[j]>arr[j+1]) 
            {
              swap(arr[j],arr[j+1]);
            }
           
         }
        }
     

    //  for(int i=0;i<n;i++)
    //  {
    //     cout<<arr[i]<<" ";
    //   }
    //   cout<<endl;
    //   for(int i=0;i<n;i++)
    //  {
    //     cout<<sortArray[i]<<" ";
    //   }
    //   cout<<endl;

    
  cout<<(sortArray==arr ? "YES":"NO")<<endl;
 }
return 0;
}