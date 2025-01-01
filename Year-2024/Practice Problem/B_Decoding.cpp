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
typedef long long int ll;
int main()
{
ll n;cin>>n;
string s;cin>>s;
string ans="";
/*
Example Walkthrough
Consider the encoded word "logva":

Traverse from end to start: a -> v -> g -> o -> l
Start with an empty decoded string and insert each character:
Insert 'a': decoded = "a"
Insert 'v' at median position: decoded = "va"
Insert 'g' at median position: decoded = "vga"
Insert 'o' at median position: decoded = "voga"
Insert 'l' at median position: decoded = "volga"

*/
for(int i=n-1;i>=0;i--)
{
ans.insert(ans.begin()+ans.size()/2,s[i]);
}

cout<<ans<<endl;

return 0;
}

/*
Explanation of the Code
Input Reading: We read the length n and the encoded string s.
Decoding Process:
We initialize decoded as an empty string.
We traverse the encoded string s from the end to the start.
For each character s[i], we insert it at the median position of decoded.
Output: Finally, we print the decoded string which is the original word before encoding.

*/
