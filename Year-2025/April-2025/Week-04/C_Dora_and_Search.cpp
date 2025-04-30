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
void solve()
{
    int n;
    cin >> n;
    vi arr(n + 1);
    FOR(i, 1, n)
    cin >> arr[i];

   
    int i = 1;
    int j = n;
    int mate_ase_mn = 1;
    int mate_ase_mx = n;
    bool found = false;
    while (i < n && i < j)
    {
        if (arr[i] > mate_ase_mn && arr[i] < mate_ase_mx && arr[j] > mate_ase_mn && arr[j] < mate_ase_mx)
        {
            found = true;
            cout << i << " " << j << endl;
            break;
        }
        if (mate_ase_mn == arr[i])
        {
            i++;
            mate_ase_mn++;
        }
        if (mate_ase_mn == arr[j])
        {
            j--;
            mate_ase_mn++;
        }
        if (mate_ase_mx == arr[j])
        {
            j--;
            mate_ase_mx--;
        }
        if (mate_ase_mx == arr[i])
        {
            i++;
            mate_ase_mx--;
        }
    }
    if (!found)
        cout << -1 << endl;
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
        solve();
    }
    return 0;
}