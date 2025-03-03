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
        int ini_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ini_sum += arr[i];
        }

        // unless length of n=1
        if (n == 1)
        {
            cout << arr[0] << endl;
            continue;
        }

        int mx_sum = ini_sum;

        for (int i = 1; i <= n - 1; i++)
        {
            vi temp = arr;
            for (int j = 0; j < i; j++)
            {
                if (temp.size() == 1)
                {
                    if (temp[0] > mx_sum)
                    {
                        mx_sum = temp[0];
                    }
                    break;
                }
                if (temp[0] > temp.back())
                {
                    reverse(temp.begin(), temp.end());
                }
                vi diff;
                for (int k = 0; k < temp.size() - 1; k++)
                {
                    diff.push_back(temp[k + 1] - temp[k]);
                }
                temp = diff;
            }
            int sum = 0;
            for (int num : temp)
            {
                sum += num;
            }
            if (sum > mx_sum)
            {
                mx_sum = sum;
            }
        }

        cout << mx_sum << endl;
    }
    return 0;
}