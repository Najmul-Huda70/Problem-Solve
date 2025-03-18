// Najmul Huda
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            string s = v[i];
            int cnts1 = count(s.begin(), s.end(), '1');
            int cnts0 = count(s.begin(), s.end(), '0');
            if (cnts1 % 2 == 0)
                continue;
            else
                cnt++;
        }
        int cnt2 = 0;
        for (int i = 0; i < m; i++)
        {
            int cnt1 = 0;
            for (int j = 0; j < n; j++)
            {
                string s = v[j];
                if (s[i] == '1')
                    cnt1++;
            }
            if (cnt1 % 2 != 0)
                cnt2++;
        }

        cout << max(cnt, cnt2) << endl;
    }
    return 0;
}