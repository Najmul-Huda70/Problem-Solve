#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n; 
    unordered_map<int, int> freq; 
    priority_queue<pair<int, int>>q; 
   set<int> s; 
    while (n--) {
        int q;
        cin >> q; 
        if (q == 1) {
            int x;
            cin >> x;
            if (freq[x] > 0) {
                s.erase(x);
            }
            freq[x]++; 
            s.insert(x); 
            q.push({freq[x], x});
        } 
        else if (q == 2) {
            if (freq.empty()) {
                cout << "empty\n"; 
            } else {
                while (!q.empty()) {
                    auto [idx, val] = q.top();
                    if (freq[val] == idx) { 
                        cout << val << "\n"; 
                        freq.erase(val); 
                        s.erase(val); 
                        q.pop(); 
                        break; 
                    }
                    q.pop(); 
                }
            }
        }
    }

    return 0;
}
