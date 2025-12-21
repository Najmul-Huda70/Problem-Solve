#include <bits/stdc++.h>
using namespace std;
bool condition_check(int n, int m, int r1, int c1, int r2, int c2)
{
    if (1LL * n * m & 1)
    {
        return false;
    }
    int mn = min(c1, c2);
    int mx = max(c1, c2);
    if (n == 1 and ((mn - 1) % 2 == 1 or (m - mx) % 2 == 1 or (mx - mn - 1) % 2 == 1))
    {
        return false;
    }
    mn = min(r1, r2);
    mx = max(r1, r2);
    if (m == 1 and ((mn - 1) % 2 == 1 or (m - mx) % 2 == 1 or (mx - mn - 1) % 2 == 1))
    {
        return false;
    }
    if (abs(r1 - r2) % 2 == abs(c1 - c2) % 2)
    {
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r1, c1, r2, c2;
        cin >> n >> m >> r1 >> c1 >> r2 >> c2;

        if (!condition_check(n, m, r1, c1, r2, c2))
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
}