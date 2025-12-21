// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e9 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    int i;
    int a, b, c = n;
    for (i = 2; i * i <= n; i++)
    {
        if (c % i == 0)
        {
            a = i;
            c = (c / a);
            break;
        }
    }
    for (int j = i + 1; j * j <= n; j++)
    {
        if (c % j == 0)
        {
            b = j;
            c = (c / b);
            break;
        }
    }
    // cout << c << endl;
    if (a * b * c == n and c > 2 and c != a and c != b and c < n)
    {
        cout << "YES" << endl;
        cout << a << " " << b << " " << c << endl;
    }
    else
        cout << "NO" << endl;
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
        solve();
    }
    return 0;
}