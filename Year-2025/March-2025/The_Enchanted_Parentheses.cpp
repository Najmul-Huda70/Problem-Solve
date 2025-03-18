// Najmul Huda
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
bool condition(string &s)
{
    deque<char> dq;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            dq.push_back(s[i]);
        else
        {
            if (dq.empty())
                return false;
            if (dq.back() == '(' && s[i] == ')')
                dq.pop_back();
            else
                return false;
        }
    }
    return dq.empty();
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
    }
    else
        cout << (condition(s) ? "YES" : "NO") << endl;

    return 0;
}