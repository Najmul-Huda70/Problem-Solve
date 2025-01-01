/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    string s;
    cin >> s;
    int alphabet_cnt[26] = {0}; 
    int n = s.size();

     for (int i = 0; i < n; i++) {
        alphabet_cnt[s[i] - 'a']++;
    }

    int odd_count = 0; 
    for (int i = 0; i < 26; i++) {
        if (alphabet_cnt[i] % 2 == 1) odd_count++;
    }

    if (odd_count > 1) {
        cout << "NO" << endl; 
    } else {
        string first = "", middle = "", last = "";

         for (int i = 0; i < 26; i++) {
             if (alphabet_cnt[i] % 2 == 1) {
                middle += (char)('a' + i);
                alphabet_cnt[i]--;
            }

             for (int j = 0; j < alphabet_cnt[i] / 2; j++) {
                first += (char)('a' + i);
            }
        }

         last = first;
        reverse(last.begin(), last.end());

        string ans = first + middle + last;
        cout << ans << endl;
    }

    return 0;
}
