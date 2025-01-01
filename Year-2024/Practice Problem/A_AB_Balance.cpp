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
#include <bits/stdc++.h>
using namespace std;
// use typedef phitron support session
typedef long long int ll;
void AB_Balance(string s)
{
    ll cnt_ab = 0, cnt_ba = 0, n = s.size();
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (s.substr(i, 2) == "ab")
        {
            cnt_ab++;
        }
        if (s.substr(i, 2) == "ba")
        {
            cnt_ba++;
        }
    }
    //cout<<cnt_ab<<" "<<cnt_ba<<endl;
    if (cnt_ab == cnt_ba)
    {
        cout << s << endl;
    }
    else if(cnt_ab>cnt_ba)
    {
        s[0]='b';
        cout<<s<<endl;
    }
    else
    {
        s[0]='a';
        cout<<s<<endl;
    }
    
}
int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        /*
       1. Count occurrences: First, count how many "ab" and "ba" substrings are in the given string.

       2. Balance the counts: If the counts are already equal, no changes are needed. If they are not, we need to make adjustments to balance them.

       3. Minimal changes: To balance them with minimal changes, we can just change one character to make the counts equal. We can either:

       i.Change the first character of the string.

       ii. Change the last character of the string.

       -->Changing either the first or the last character will affect only one of the "ab" or "ba" counts, and thus, it is sufficient to make a single change to balance the counts.

    */
        string s;
        cin >> s;
        AB_Balance(s);
    }
    return 0;
}