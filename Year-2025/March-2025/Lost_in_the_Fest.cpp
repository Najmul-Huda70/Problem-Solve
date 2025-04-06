// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
void solve()
{
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
        vi arr(n);
        FOR(i, 0, n - 1)
        {
            cin >> arr[i];
        }
        int x = arr[n - 1];
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < x)
                cnt++;
            else
                break;
        }
        int sw = n - (cnt + 1);
        cout << sw << endl;
    }
    return 0;
}