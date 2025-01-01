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
/* n=4  k=2;
arr[n]={-1,4,7,2};
*/
 int n,k;
 cin>>n>>k;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 //comulative sum               arr[n]={-1,4,7,2};
 int cur[n+1]; //               cur[n+1] ={1,-1,-4,-28,-56};
 cur[0]=1;
 for(int i=1;i<=n;i++)
 {
     cur[i]=arr[i-1] * cur[i-1];  //when i=1; cur[1]=arr[0]+ cur[0]= -1 * 1=-1 ->cur[1]
 }
 int flag=0;
for(int i=1;i<=n;i++)
{
   int mul=1;
    for(int j=0;j<i;j++)            // arr[n]= -1   4   7   2   
    {                             // cur[n+1] ={1,-1,-4,-28,-56};
      mul=cur[i]  / cur[j] ;  
      if(mul<k)                   // sum= cur[1]  - cur[0] = -1 - 0= -1
   {
    flag++;
   }
    }
}
cout<<flag<<endl;
 
return 0;
}