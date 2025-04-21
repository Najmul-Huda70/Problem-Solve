// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
bool palindrome(vi &v)
{
    vi check = v;
    reverse(all(check));
    return v == check;
}
bool solve()
{
    int n;
    cin >> n;
    vi arr(n);
    FOR(i, 0, n - 1)
    {
        cin >> arr[i];
    }

    // no delete is palindrome
    if (palindrome(arr))
    {
        return true;
    }

    int x, y;
    FOR(i, 0, n / 2)
    {
        if (i != n - 1 - i)
        {
            if (arr[i] != arr[n - 1 - i])
            {
                x = arr[i], y = arr[n - 1 - i];
                break;
            }
        }
    }
    // x delete
    vi pr1, pr2;
    FOR(i, 0, n - 1)
    {
        if (arr[i] != x)
            pr1.push_back(arr[i]);
    }

    // y delete
    FOR(i, 0, n - 1)
    {
        if (arr[i] != y)
            pr2.push_back(arr[i]);
    }
    if (palindrome(pr1) || palindrome(pr2))
    {
        return true;
    }

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
        condition(solve());
    }
    return 0;
}