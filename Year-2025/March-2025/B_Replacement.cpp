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
bool condition(string &s, string &r)
{
    int n = s.size();
    // s 0 1 count
    int counts1 = count(s.begin(), s.end(), '1');
    int counts0 = count(s.begin(), s.end(), '0');
    // r 0 1 count
    int countr1 = count(r.begin(), r.end(), '1');
    int countr0 = count(r.begin(), r.end(), '0');

    // jodi all element same hoi return false
    if (counts1 == n || counts0 == n)
        return false;
    if ((counts1 == countr0 || counts1 - 1 == countr0) && (counts0 == countr1 || counts0 - 1 == countr1))
        return true;
    else
        return false;
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r;
        cin >> r;
        if (condition(s, r))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}