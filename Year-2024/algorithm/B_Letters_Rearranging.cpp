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
typedef long long ll;
const int N = 1e6 + 9;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
bool is_palindrome(const string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}
bool make_non_palindrome(string& s) {
    if (!is_palindrome(s)) {
        return true;  
         }
    
    for (int i = 0; i < s.size() - 1; i++) {
        swap(s[i], s[i + 1]);
        if (!is_palindrome(s)) {
            return true;
              }
        // swap(s[i], s[i + 1]);
    }
    
    return false; }

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        if (make_non_palindrome(s)) {
            cout << s << endl;
        } else {
            cout << -1 << endl; 
             }
    }
    return 0;
}
