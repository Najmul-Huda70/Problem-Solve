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
        int a, b, x1, y1, x2, y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;

        // knights can move 8 poisition

        // imaging king(x1,y1) is forked by knights 8 position
        set<pair<int, int>> KingFroked = {{x1 + a, y1 + b}, {x1 - a, y1 + b}, {x1 + a, y1 - b}, {x1 - a, y1 - b}, {x1 + b, y1 + a}, {x1 - b, y1 + a}, {x1 + b, y1 - a}, {x1 - b, y1 - a}};
         // imaging king(x1,y1) is forked by knights 8 position
        set<pair<int, int>> QeenForked = {{x2 + a, y2 + b}, {x2 - a, y2 + b}, {x2 + a, y2 - b}, {x2 - a, y2 - b}, {x2 + b, y2 + a}, {x2 - b, y2 + a}, {x2 + b, y2 - a}, {x2 - b, y2 - a}};
        int BothForked = 0;
        for (auto king : KingFroked)
        {
            for (auto qeen : QeenForked)
            {
                if (king == qeen)
                {
                    BothForked++;
                    break;
                }
            }
        }

        cout << BothForked << endl;
    }
    return 0;
}