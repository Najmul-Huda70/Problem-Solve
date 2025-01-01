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
// https://vjudge.net/problem/gym-310911g
/*
problem : input arr[n]
5
4 3 10 6 7
output: arr[i] =4 k koto koto dara divide kora jai;
make new array mult[N] ;
multi[i] i=1,2,3,4... th index dara input array er koto golo number divide kora jai eta kuje ber korte hobe ;
5 3 2 1 1 1 1 0 0 1

*/
#include<bits/stdc++.h>
using namespace std;
const int N=1e6+9,M=1e6;
int cnt[N],multi[N];
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 int n;//5
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  int x; //4 3 10 6 7
  cin>>x;
  // x th index er value protibar ++ korsi.count hosse koto golo x ase .
  cnt[x]++;//cnt[4]++;   cnt[4]=1;
  }
  //time complexity O(nlogn)
  for(int i=1;i<N;i++)
  {
    for(int j=i;j<N;j+=i)
    {
       //i er multiple golo te jassi & kon ta koi bar ase cnt[j] add korsi
      //i=1   j=3
      //i=2   j=4
      multi[i]+=cnt[j];//cnt[3]=1 so, multi[1]=1; when i=2 & j=4 cnt[4]=1;so,multi[2]=1;
    }
  }
  for(int i=1;i<=M;i++)
  {
    cout<<multi[i]<<" ";
  }
return 0;
}