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
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

const int N = 500 + 9;
const ll inf = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; 
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n][n];
        
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }

        int op = 0; 
       for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] < 0) {
                    int mx = abs(arr[i][j]);
                       op += mx;
                    
                    for (int k = 0; i + k < n && j + k < n; k++) {
                        arr[i + k][j + k] += mx;
                    }
                }
            }
        }
        
        cout << op << endl; 
         }
    
    return 0;
}
