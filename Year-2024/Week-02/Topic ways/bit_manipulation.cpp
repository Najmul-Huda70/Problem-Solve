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
// bool isPower(int n)
// {
//     return (n && !(n&(n-1))); 
// }
// int NumberofOnes(int n)
// {   int count=0;
//     while(n)
//     {
//         n=n & (n-1);
//         count++;
//     }
//     return count;
// }
// void subsets(int arr[],int n)
// {
// for(int i=0;i<(1<<n);i++)
// {
//  for(int j=0;j<n;j++)
//  {
//   if(i & 1<<j)
//   {
//     cout<<arr[j]<<" ";
//   }
//   }
//   cout<<endl;
//  }
// }
int unique(int arr[],int n)
{
int X_ORsum=0;
for(int i=0;i<n;i++)
{
 X_ORsum=X_ORsum^arr[i];
 }
 return X_ORsum;
}
int main()
{

 int n;cin>>n;
 //cout<<isPower(n)<<endl;
 //cout<<NumberofOnes(n)<<endl;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  }
  //subsets(arr,n);
  cout<<unique(arr,n)<<endl;
return 0;
}