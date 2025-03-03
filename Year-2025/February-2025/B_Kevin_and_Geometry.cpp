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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        map<int, int> freq;
        vi tw;

        for (int num : arr)
        {
            freq[num]++;
            if (freq[num] == 2)
            {
                tw.push_back(num);
            }
        }

        if (tw.empty())
        {
            cout << "-1" << endl;
           continue;
        }

        if (tw.size() > 1)
        {
            cout << tw[0] << " " << tw[0] << " "
                 << tw[1] << " " << tw[1] << endl;
           continue;
        }

        int a = tw[0];

        vi v;
        int dup_cnt = 2;
        for (int num : arr)
        {
            if (num == a && dup_cnt > 0)
            {
                dup_cnt--;
                continue;
            }
            v.push_back(num);
        }

        bool found = false;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i + 1] < v[i] + 2 * a)
            {
                cout << a << " " << a << " "
                     << v[i] << " " << v[i + 1] << endl;
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
