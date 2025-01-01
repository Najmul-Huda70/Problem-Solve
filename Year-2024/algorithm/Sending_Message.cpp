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
    
    string s, s2;
    
    while (cin >> s >> s2) {
        int n = s.size();
        int n2 = s2.size();
        int j = 0, cnt = 0;
        
        for (int i = 0; i < n2; i++) {
            while (j < n && s2[i] != s[j]) {
                j++; 
            }
            
            if (j < n && s2[i] == s[j]) {
                cnt++;
                j++; 
                  } else {
                break; 
            }
        }
        
        if (cnt == n2) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
