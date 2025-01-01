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

    int T; // number of test cases
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        string sequence;
        cin >> sequence;

        // A map to store the count of trails for each sprinkler
        map<char, int> trails;

        // Traverse the sequence and count trails
        for (int i = 1; i < sequence.size(); ++i) {
            char curr = sequence[i];
            char prev = sequence[i - 1];
            
            // If Sultan moves from one sprinkler to another, increment trail count for the previous sprinkler
            if (curr != prev) {
                trails[prev]++;
            }
        }

        // Don't forget the last character in the sequence, as it can also be a trail starter
        trails[sequence.back()]++;

        // Output in the required format
        cout << "Case " << case_num << endl;
        for (auto& trail : trails) {
            cout << trail.first << " = " << trail.second << endl;
        }
    }

    return 0;
}
