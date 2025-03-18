// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, cost;
        cin >> n >> cost;
        string s; // DCBAE
        cin >> s;
        ll ans = 0;

        int cntA = count(s.begin(), s.end(), 'A');
        int cntB = count(s.begin(), s.end(), 'B');
        int cntC = count(s.begin(), s.end(), 'C');
        int cntD = count(s.begin(), s.end(), 'D');
        int cntE = count(s.begin(), s.end(), 'E');
        vector<int> v = {cntA, cntB, cntC, cntD, cntE};
        sort(v.rbegin(), v.rend());
        int onobadok = 0;
        for (int i = 0; i < 5; i++)
        {
            if (v[i] > 0)
            {
                int kk = v[i] + onobadok;
                int ono = kk * (kk + 1) / 2 - (onobadok * (onobadok + 1)) / 2;
                if (ono >= cost)
                {
                    // cout << cost << endl;
                    ans += cost;
                    v[i] = 0;
                }
            }
        }
        for (int i = 4; i >= 0; i--)
        {
            if (v[i] > 0)
            {
                int kk = v[i] + onobadok;
                int ono = kk * (kk + 1) / 2 - (onobadok * (onobadok + 1)) / 2;
                if (ono >= cost)
                {
                    // cout << cost << endl;c
                    ans += cost;
                    v[i] = 0;
                }
                else
                {
                    //  cout << ono << endl;
                    ans += ono;
                    onobadok += v[i];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}