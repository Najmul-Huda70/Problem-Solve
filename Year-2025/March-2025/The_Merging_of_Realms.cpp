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
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        vec.push_back({start, end});
    }
    stable_sort(vec.begin(), vec.end());
    // for (auto [st, en] : vec)
    //     cout << st << " " << en << endl;
    int k = 0;
    for (int i = 0; i < 1000000; i++)
    {
        for (int i = 0; i < vec.size() - 1;)
        {
            int first_val, last_val, next_range_first_val, next_range_last_val;
            first_val = vec[i].first;
            last_val = vec[i].second;
            next_range_first_val = vec[i + 1].first;
            next_range_last_val = vec[i + 1].second;
            if (first_val <= next_range_first_val && last_val >= next_range_first_val)
            {
                vec.erase(vec.begin() + i);
                vec.erase(vec.begin() + i);
                vec.push_back({first_val, next_range_last_val});
            }
            else
                i++;
        }
        stable_sort(vec.begin(), vec.end());
    }

    for (auto [st, en] : vec)
        cout << st << " " << en << endl;
    return 0;
}