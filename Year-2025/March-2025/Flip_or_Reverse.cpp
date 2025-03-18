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
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string A, B;
        cin >> A >> B;

        vector<tuple<int, int, int>> ops;

        int i = 0;
        while (i < n)
        {
            if (A[i] == B[i])
            {
                i++;
                continue;
            }

            int start = i;
            while (i < n && A[i] != B[i])
            {
                i++;
            }
            int end = i;

                        ops.emplace_back(1, start + 1, end);
        }

        cout << ops.size() << "\n";
        for (const auto &[type, L, R] : ops)
        {
            cout << type << " " << L << " " << R << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
