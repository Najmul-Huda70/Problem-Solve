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
string solve(string &s)
{
    int n = s.size();
    int countB = 0, countb = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            s[i] = '1';
            countB++;
        }
        else if (s[i] == 'b')
        {
            s[i] = '1';
            countb++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z' && countb)
        {
            s[i] = '1';
            countb--;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z' && countB)
        {
            s[i] = '1';
            countB--;
        }
    }
    string ans = {};
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1')
            ans += s[i];
    }
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}