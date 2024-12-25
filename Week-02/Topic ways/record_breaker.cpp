/*
problem : record breaker

isyana is given the number of visitors at her local theme park on N consecutive days .the number of visitors on the i-th days vi . a day is record breaking if it satisfies both of the following conditions :
--> the number of visitors on the day is stricly  larger than the number of visitors on each of the previous days.
--> either it is the last day, or the number of visitors on the day is stricly laarger than the number of visitors on the following day.
--> note that the very first day could be a record be a record breaking day!
please help isyana find out the number of  record breaking days.

Input
The first line of the input gives the number of test cases, T. T test cases follow.
Each test case begins with a line containing the integer N. The second line
contains N integers. The i-th integer is Vi
.

Output
For each test case, output one line containing Case #x: y, where x is the test case
number (starting from 1) and y is the number of record breaking days.
Constraints
Time limit: 20 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.
0 ≤ Vi ≤ 2 × 105
.
Test set 1
1 ≤ N ≤ 1000.

Test set 2
1 ≤ N ≤ 2 × 105 for at most 10 test cases.
For the remaining cases, 1 ≤ N ≤ 1000.

Solution
Constraints Analysis

1 sec = 108 operations
20 sec = 2x109 operations

Brute Force Approach
Iterate over all the elements and check if it is record breaking day or not.
Note: To check if a[i] is a record breaking day, we have to iterate over a[0],
a[1],...., a[i-1].

Time complexity for this operation: O(n)
Overall Time Complexity: O(n2
)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n; 
    int arr[n+1];
    arr[n]=-1;
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];

     }
     
     if(n==1)
     {
        cout<<"1"<<endl;
        return 0;
     }
     int mx=INT_MIN;
     int ans =0;
     for(int i=0;i<n;i++)
     {
      if(arr[i]>mx && arr[i]>arr[i+1])
      {
        ans++;
      }
      mx=max(mx,arr[i]);
      }
cout<<ans<<endl;

return 0;
}