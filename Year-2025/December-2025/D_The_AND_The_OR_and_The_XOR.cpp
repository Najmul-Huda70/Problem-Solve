#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll Hamming_distance(ll a, ll b)
{
    return __builtin_popcountll(a xor b);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    // duplicate element
    for (auto [v, cnt] : freq)
    {
        if (cnt >= 2) // xor input same, same values output 0
        {
            cout << 0 << endl;
            return;
        }
    }
    ll ans = INT_MAX;
    unordered_set<ll> s(a.begin(), a.end());
    for (int k = 1; k <= 2 && ans > k; k++)
    {
        for (auto x : a)
        {
            if (k == 1)
            {
                for (int b = 0; b < 64; b++)
                {
                    ll y = x ^ (1LL << b);
                    if (s.count(y))
                    {
                        ans = 1;
                        break;
                    }
                }
            }
            else if (k == 2)
            {
                for (int b1 = 0; b1 < 100; b1++)
                {
                    for (int b2 = b1 + 1; b2 < 100; b2++)
                    {
                        int y = x ^ (1 << b1) ^ (1 << b2);
                        if (s.count(y))
                        {
                            ans = 2;
                            break;
                        }
                    }
                    if (ans == 2)
                        break;
                }
            }
            if (ans == k)
                break;
        }
        // rare case
        if (ans > 2)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ans = min(ans, Hamming_distance(a[i], a[j]));
                }
            }
        }
        cout << ans << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}