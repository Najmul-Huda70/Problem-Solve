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
 int arr[N]; // arr[] = 10^9
void merge(int l,int mid,int h)
{    
    // arr partition left : low to mid arr[] = {1,5,8,15,24}
    // arr partition right: mid+1 to high arr[] = {3,10,16,20}

     int i=l; // left arr iterate
     int j=mid+1; // right arr iterate
    int sortArray[N]; // sort array store
     int k=l;
     while(i<=mid && j<=h)
     {
       if(arr[i]<arr[j])
       { 
        sortArray[k]=arr[i];
          i++;
          k++;
       }
       else
       {
        sortArray[k]=arr[j];
          j++;
          k++;
       }
     }
     if(i>mid)
     {
        while(j<=h)
        {
          sortArray[k] = arr[j];
          j++;
          k++;
        }
     }
     if(j>h)
     {
        while(i<=mid)
        {
          sortArray[k] = arr[i];
          i++;
          k++;
        }
     }
     for(int st=l;st<=h;st++)
     {
        arr[st] = sortArray[st];
      }
}
void sort_array(int low,int high)
{ 
   if(low<high)
    {
        int mid = (low+high)/2;
        sort_array(low,mid);
        sort_array(mid+1,high);
        merge(low,mid,high);
    }
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);
 int t;cin>>t;
 while(t--) //t= maximum 10^4
 {
    int n; // n= maximum 10^5
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>arr[i];
     }
   sort_array(1,n);
  //  for(int i=1;i<=n;i++)
  //  { 
  //     cout<<arr[i]<<" ";
  //   }
  //   cout<<endl;
  int Median_pos = (n/2) + n%2;
  int Median_value = arr[Median_pos];
  int cnt =0;
  for(int i=Median_pos;i<=n;i++)
  {
    if(Median_value!=arr[i]) break;
    else cnt++;
   }
   cout<<cnt<<endl;
 }
return 0;
}