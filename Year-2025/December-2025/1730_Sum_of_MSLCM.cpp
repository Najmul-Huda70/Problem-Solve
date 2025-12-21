// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 20000001;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
ll arr[N + 1];
void built()
{
    // memset(arr, 1, sizeof(arr));
    for (int i = 1; i <= N; i++)
        arr[i] = 1;
    for (int i = 2; i  <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            arr[j] += i;
        }
    }
    // preffix sum
    for (int i = 3; i <= N; i++)
    {
        arr[i] += arr[i - 1];
    }
}
void solve()
{
    int n;
    while (cin >> n and n != 0)
    {
        // if(n>N) continue;
        cout << arr[n] << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    built();
    solve();

    return 0;
}