// s.i.snajmulhuda2002
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 0;
    bool flag = true;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[' || s[i] == '<')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {
                flag = false;
                break;
            }

            if((st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}') || (st.top()=='<' && s[i]=='>'))
            {
                st.pop();
            }
             else
             {
                 cnt++;
                st.pop();
             }
        }
    }
    if(flag && st.empty()) cout<<cnt<<endl;
    else cout << "Impossible" << endl;
    return 0;
}