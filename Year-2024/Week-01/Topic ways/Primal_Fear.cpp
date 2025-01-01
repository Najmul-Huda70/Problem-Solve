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
const int N=1e6+9;
vector<bool> is_prime(N,true);
void sieve()
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<N;i++)
    {
     if(is_prime[i])
     {
        for(int j=i+i;j<N;j+=i)
     {
        is_prime[j]=false;
     }
     }
     }
}
bool has_digit_0(int x)
{
   while(x)
   {
    if(x%10==0) return true;
     x/=10;
   }
   return false;
}
bool is_valid(int x)
{
    if(!is_prime[x]) return false;
    if(has_digit_0(x)) return false;
     string s=to_string(x);
    for(int i=0;i<s.size();i++)
    {
      string suffix=s.substr(i);
      int suffix_int=stoi(suffix);
      if(!is_prime[suffix_int])
      {
          return false;
      }
      
    }
    return true;
}
int cnt_valid_in_prefix[N];
bool valid[N];
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
sieve();
 for(int i=1;i<N;i++)
 {
  valid[i]= is_valid(i);
  }
 for(int i=1;i<N;i++)
 {
    cnt_valid_in_prefix[i]=cnt_valid_in_prefix[i-1]+valid[i];
 }
 int t;
 cin>>t;
 while(t--)
 {
    int x;
    cin>>x;
    cout<<cnt_valid_in_prefix[x]<<endl;
 }
return 0;
}