#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
using vi = vector<int>;

const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;

bool check(char a, char b) {
    return ((a == '(' && b == ')') || 
            (a == '[' && b == ']') || 
            (a == '{' && b == '}') || 
            (a == '<' && b == '>'));
}

void solve(const string& s, vi& v) {
    int n = s.size();  
    deque<char> st; 
     for (int j = n-1; j >= 0; j--) {
        if (s[j] == '(' || s[j] == '{' || s[j] == '[' || s[j] == '<') {
            st.push_back(s[j]);  
        } else {  
            if (!st.empty() && check(st.back(), s[j])) {  
               
                st.pop_back();
                v[j]+=v[]
                
            } 
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int t, cs = 0;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        
        vi v(n,0);  
        cout << "Case " << ++cs << ":\n";
        solve(s, v) ;
        for (int i = 0; i < n; ++i) {
            cout <<v[i]<< "\n";       
               }
              
    }

    return 0;
}
