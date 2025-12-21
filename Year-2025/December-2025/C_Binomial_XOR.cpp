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
const int N = 1e6 + 9;
const ll mod = 998244353;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
int power(long long n, long long k)
{
    int ans = 1 % mod;
    n %= mod;
    if (n < 0)
        n += mod;
    while (k)
    {
        if (k & 1)
            ans = (long long)ans * n % mod;
        n = (long long)n * n % mod;
        k >>= 1;
    }
    return ans;
}
int f[N], invf[N];
int nCr(int n, int r)
{
    if (n < r or n < 0)
        return 0;
    return 1LL * f[n] * invf[r] % mod * invf[n - r] % mod;
}

long long Binomial_XOR(int n)
{
    vl funct(n + 1);
    for (int i = 1; i <= n; i++)
    {
        long long f_of_i = nCr(i, i);
        for (int j = i + 1; j <= n; j++)
        {
            f_of_i = (f_of_i xor nCr(j, i)) % mod;
        }
        funct[i] = f_of_i;
    }
    long long ans = funct[1];
    for (int i = 2; i <= n; i++)
    {
        ans = ans xor funct[i];
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    cout << Binomial_XOR(n) << endl;
    // cout << f[n] << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    f[0] = 1;
    for (int i = 1; i < N; i++)
    {
        f[i] = 1LL * i * f[i - 1] % mod;
    }
    invf[N - 1] = power(f[N - 1], mod - 2);
    for (int i = N - 2; i >= 0; i--)
    {
        invf[i] = 1LL * invf[i + 1] * (i + 1) % mod;
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}