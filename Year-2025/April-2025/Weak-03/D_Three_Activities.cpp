// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
class trio
{
public:
    pair<int, int> x;
    pair<int, int> y;
    pair<int, int> z;

    trio()
    {
        x = {INT_MIN, -1};
        y = {INT_MIN, -1};
        z = {INT_MIN, -1};
    }
    // void display() { cout << x << " " << y << " " << z << endl; }
};
void sort_(trio &A, int val, int i) // 3 4 8 11 10 8 10 2 20 3
{
    if (A.z.first < val)
    {
        if (A.y.first < val)
        {
            if (A.x.first < val)
            {
                A.z = A.y;
                A.y = A.x;
                A.x = {val, i};
            }
            else
            {
                A.z = A.y;
                A.y = {val, i};
            }
        }
        else
        {
            A.z = {val, i};
        }
    }
}
ll solve()
{
    int n;
    cin >> n;

    vi a(n), b(n), c(n);
    trio A, B, C;

    // a first
    FOR(i, 0, n - 1)
    {
        cin >> a[i];
        sort_(A, a[i], i);
    }

    // b second
    FOR(i, 0, n - 1)
    {
        cin >> b[i];
        sort_(B, b[i], i);
    }

    // c third
    FOR(i, 0, n - 1)
    {
        cin >> c[i];
        sort_(C, c[i], i);
    }

    vector<pair<int, int>> p = {A.x, A.y, A.z};
    vector<pair<int, int>> q = {B.x, B.y, B.z};
    vector<pair<int, int>> r = {C.x, C.y, C.z};
    ll sum = 0;
    for (auto [val1, idx1] : p)
    {
        for (auto [val2, idx2] : q)
        {
            for (auto [val3, idx3] : r)
            {
                if (idx1 == idx2 || idx1 == idx3 || idx2 == idx3)
                    continue;
                else
                {
                    if (val1 > 0 && val2 > 0 && val3 > 0)
                    {
                        sum = max(sum, 1LL * (val1 + val2 + val3));
                        //  cout << val1 << " " << val2 << " " << val3 << " = " << val1 + val2 + val3 << endl;
                    }
                }
            }
        }
    }
    return sum;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}