/*
problem :
an arithmetic array is an array that contains at least two integers and the differences between consecutive integer are equal .For example , [9,10],[3,3,3],[9,7,5,3] are arithmetic arrays ,
while [1,3,3,7],[2,1,2], and [1,2,4] are not arithmetic arrays .

sarasvati has an array of N non-negative integers.
the i-th integer of the array is Ai. she wants to choose a contiguous arithmetic sub array from her array that has the maximum length .plese help her to determine the length of the longest contiguous arithmetic subarray.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];

     }
     int ans =INT_MIN;
     int cur=2;
     int pd=arr[1]-arr[0];
    int j=2;
    while(j<n)
    {
        if(pd==arr[j]-arr[j-1])
        {
            cur++;

        }
        else 
        {
            pd=arr[j]-arr[j-1];
            cur=2;

        }
        ans=max(ans,cur);
        j++;
    }
     cout<<ans<<endl;
    
    
    
    
    return 0;
}
/*
input :
7
10 7 4 6 8 10 11   


output
4

*/