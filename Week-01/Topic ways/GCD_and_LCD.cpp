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
/*
 # GCD = greatest common divisors

 suppose a=24  & b=26
 divisors a = 1,2,3,4,6,8,12,24
 divisors b = 1,2,13,26

 greatest common divisors a and b =1,2 so GCD(a,b)=1*2;

ekane GCD(24,26)=2 mane bojai 2 a & b both divisor
GCD(a,b) = GCD(a+b,b) = GCD(a-b,b) = GCD(a%b,b)
LCM(a,b) = (a%b,b)/GCD;

*/
int GCD(int a,int b)
{
    //base case
    if(a==0) return b;
    if(b==0) return a;
    if(a<b) swap(a,b);
return GCD(a%b,b);
}
int LCM(int a,int b)
{
  return (a*b)/GCD(a,b);  
}
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
 int a,b;
 cin>>a>>b;
cout<<"GCD("<<a<<","<<b<<")= "<<GCD(a,b)<<endl;
cout<<"LCM("<<a<<","<<b<<")= "<<LCM(a,b)<<endl;
return 0;
}