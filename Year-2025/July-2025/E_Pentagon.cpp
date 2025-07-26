// Najmul Huda
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char s1, s2, t1, t2;
    cin >> s1 >> s2 >> t1 >> t2;
    int dist1 = abs(s1 - 'A' - s2 - 'A');
    int dist2 = abs(t1 - 'A' - t2 - 'A');
    dist1 = min(dist1, 5 - dist1);
    dist2 = min(dist2, 5 - dist2);
    if (dist1 == dist2)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    solve();
    return 0;
}