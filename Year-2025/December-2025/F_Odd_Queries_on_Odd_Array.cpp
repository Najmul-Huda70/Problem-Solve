// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define condition(flag) cout << (flag ? "YES" : "NO") << '\n'
using ll = long long;
using vi = vector<int>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7;

template <typename T>
void print(const vector<T> &ans)
{
    for (auto val : ans)
        cout << val << " ";
    cout << "\n";
}

vector<unordered_map<int, int>> t;
vi a;

void build(int n, int b, int e)
{
    if (b == e)
    {
        t[n][a[b]]++;
        return;
    }
    int mid = (b + e) >> 1;
    int l = n << 1, r = l | 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    for (auto [v, cnt] : t[l])
        t[n][v] += cnt;
    for (auto [v, cnt] : t[r])
        t[n][v] += cnt;
}

unordered_map<int, int> query(int n, int b, int e, int i, int j)
{
    unordered_map<int, int> mp;
    if (b > j || e < i)
        return mp;
    if (b >= i && e <= j)
        return t[n];

    int mid = (b + e) >> 1;
    int l = n << 1, r = l | 1;

    auto left = query(l, b, mid, i, j);
    auto right = query(r, mid + 1, e, i, j);

    for (auto [v, cnt] : left)
        mp[v] += cnt;
    for (auto [v, cnt] : right)
        mp[v] += cnt;

    return mp;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, q;
        cin >> n >> q;

        a.assign(n + 1, 0);
        t.assign(4 * n + 5, {});

        for (int i = 1; i <= n; i++)
            cin >> a[i];

        build(1, 1, n);

        vi ans(q + 1, 0);
        vector<pair<int, int>> Q(n + 1);
        for (int i = 1; i <= q; i++)
        {
            int x, y;
            cin >> x >> y;

            int xi = ((x - 1 + ans[i - 1]) % n) + 1;
            int yi = ((y - 1 + ans[i - 1]) % n) + 1;
            int l = min(xi, yi), r = max(xi, yi);

            // auto result = query(1, 1, n, l, r);
            Q[r] = {l, i};
        }

        for (int i = 1; i <= q; i++)
            cout << ans[i] << ' ';
        cout << endl;
    }
}