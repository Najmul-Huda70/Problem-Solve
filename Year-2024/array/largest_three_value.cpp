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
void largest_three_value(int arr[],int n)
{
    int first,second,third;
     first=second=third=INT_MIN;
     for(int i=0;i<n;i++)
     {
      if(arr[i]>first)
     {   second=first;
        third=second;
         first=arr[i];
     }
     else if(arr[i]>second && arr[i]<first)
     {
        
        third=second;
        second=arr[i];
     }
     else if(arr[i]>third && arr[i]<second)
     {
        third=arr[i];
     }
      }
      cout<<first<<" "<<second<<" "<<third<<" "<<endl;
     
}
int main()
{

 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
  }
  largest_three_value(arr,n);
return 0;
}