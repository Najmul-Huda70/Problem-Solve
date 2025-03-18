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
const ll mod = 1e5 + 7, inf = 1e10;
bool condition(vector<ll> &arr, string &s, int n)
{
    if (n != s.size())
        return false;
    map<int, char> mp;
    map<char, int> mp_s;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            if (mp[arr[i]] != s[i])
                return false;
        }
        else
            mp[arr[i]] = s[i];
        if (mp_s.find(s[i]) != mp_s.end())
        {
            if (mp_s[s[i]] != arr[i])
                return false;
        }
        else
            mp_s[s[i]] = arr[i];
    }
    return true;
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
        int n;
        cin >> n;
        vl arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;

            if (condition(arr, s, n))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}