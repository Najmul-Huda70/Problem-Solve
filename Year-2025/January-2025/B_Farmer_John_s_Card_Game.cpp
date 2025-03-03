//Najmul Huda
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
#define MAX_N 2000

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(n, vector<int>(m));
        vector<pair<int,int>>pr;

       for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
            sort(v[i].begin(), v[i].end());
            pr.push_back({v[i][0],i+1});        
        }

  
       sort(pr.begin(),pr.end());

        int pile = -1;
        bool flag = true;

        for (int r = 0; r < m && flag; r++) { 
            for (int i = 0; i < n && flag; i++) {
                int cow = pr[i].second - 1;
                bool play = false;
                for (int j = 0; j < m; j++) {
                    if (v[cow][j] > pile) {
                        pile = v[cow][j];
                        v[cow][j] = -1; 
                        play = true;
                        break;
                    }
                }
                if (!play) flag = false;
            }
        }

        if (flag) {
            for (int i = 0; i < n; i++) {
                cout << pr[i].second << " ";
            }
            cout <<endl;
        } else {
            cout << "-1"<<endl;
        }
    }
    return 0;
}
