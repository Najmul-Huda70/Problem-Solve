//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<int>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const int mod = 1e5 + 7,inf = 1e9;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n; // Number of lists
        cin >> n;
        vector<vector<int>> li(n);
        ll mx = LLONG_MIN; // Max value
        vector<pair<int, int>> two;
        for (int i = 0; i < n; i++) {
            int m; // Number of elements in the list
            cin >> m;
            for (int j = 0; j < m; j++) {
                int val;
                cin >> val;
                li[i].push_back(val);
            }
            sort(li[i].begin(),li[i].end());

            two.push_back({li[i][0], li[i][1]});
            
        }

        if (two.size() == 1) {
            cout << two[0].first << endl;
            continue;
        }
    
        //first element sum
        ll first_sum=0LL;
        for(auto [first,second]:two) first_sum=first_sum+(ll)first;

        mx = max(first_sum,mx);

        // first minimum value
        ll first_mn = LLONG_MAX;
        for(auto [first,second]:two) first_mn=min(first_mn,(ll)first);
        //cout<<first_mn<<endl;
        //second sum
        ll second_sum = 0LL;
        for(auto [first,second]:two) second_sum =second_sum +(ll)second;

      // cout<<second_sum<<endl;

       for(int i=0;i<n;i++)
       {
        mx = max(mx,1LL*(second_sum+first_mn-(ll)two[i].second));
        }
        cout << mx << endl;
    }
    return 0;
}