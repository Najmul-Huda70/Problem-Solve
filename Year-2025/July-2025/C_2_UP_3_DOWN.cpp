// Najmul Huda
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    if ((a < b && b - a <= 2) || (a > b) && a - b <= 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int32_t main()
{

    solve();
    return 0;
}