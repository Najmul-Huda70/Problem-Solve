/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];

  }


// kadane's algorithom
int currentsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++)
{
    currentsum+=arr[i];
    if(currentsum<0)
    {
        currentsum=0;
    }
    maxsum=max(maxsum,currentsum);
 }
cout<<maxsum<<endl;







//cumulative sum approach
/*
-1 4 7 2
apply 
cumulative sum approach
current array
-1 3 10 12
*/

// int curr[n+1];
// curr[0]=0;
// for(int i=1;i<=n;i++)
// {
//  curr[i]=arr[i-1]+curr[i-1];
//  }
//  for(int i=0;i<=n;i++)
//  {
//   cout<<curr[i]<<" ";
//   }
//   cout<<endl;
//  int maxsum=INT_MIN;

//  for(int i=1;i<=n;i++)
//  {
//     int sum=0;
//   for(int j=0;j<=i;j++)
//   {
/*
input 
 7
-2 3 4 -1 5 4 9

output
              j=1           i=n
curr arry = 0 -2 1 5 4 9 13 22
find max  sum index i=n; j=1
 maxsum = 24
*/
//     sum=curr[i]-curr[j];
//     maxsum=max(sum,maxsum);
//   }
//   }
// cout<<maxsum<<endl;









// brute force approach


//   int maxsum=0;
//   for(int i=0;i<n;i++)
//   {
//    for(int j=i;j<n;j++)
//    {
//     int sum=0;
//     for(int k=i;k<=j;k++)
//     {
//         sum+=arr[k];
//      //cout<<arr[k]<<" ";
//     }
//     //cout<<endl;
//     //cout<<sum<<endl;
//     maxsum=max(maxsum,sum);

//    }
//    }
//    cout<<maxsum<<endl;
return 0;
}