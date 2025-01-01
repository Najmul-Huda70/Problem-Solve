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
//use typedef phitron support session 
typedef long long int ll;
int main()
{
string s,str;
cin>>s>>str;
ll i=s.size()-1;
ll j=str.size()-1;
ll cnt=0;
while(i>=0 && j>=0)
{
    if(s[i]==str[j])
    {
     cnt+=2;   
    }
    else
    {
        break;
    }
    i--;j--;
}
ll total_size = s.size()+str.size();
cout<<total_size-cnt<<endl;

return 0;
}
/*
Input: Two strings, s and str.
Initialization:
i is set to the last index of s.
j is set to the last index of str.
cnt is initialized to 0, which will count the number of matching characters from the end.
Counting Matching Characters:
The while loop runs as long as i and j are non-negative.
If the characters at s[i] and str[j] match, cnt is incremented by 2 (since each match is counted as two characters removed), and both indices are decremented.
If characters don't match, the loop breaks.
Calculate Result:
total_size is the sum of the lengths of s and str.
The result is total_size - cnt, which gives the minimum number of deletions required.
Output: The result is printed.
*/