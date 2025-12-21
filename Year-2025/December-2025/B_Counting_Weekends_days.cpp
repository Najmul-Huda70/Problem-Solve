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
    string month, first_day;
    cin >> month >> first_day;
    unordered_map<string, int> day_month = {{"JAN", 31}, {"FEB", 28}, {"MAR", 31}, {"APR", 30}, {"MAY", 31}, {"JUN", 30}, {"JUL", 31}, {"AUG", 31}, {"SEP", 30}, {"OCT", 31}, {"NOV", 30}, {"DEC", 31}};
    vector<string> Week = {"SAT", "SUN", "MON", "TUE", "WED", "THU", "FRI"};
    unordered_map<string, int> day_cnt;
    // start position find or first day find
    int day = 0;
    bool key = false;
    while (day < day_month[month])
    {
        for (int i = 0; i < 7; i++)
        {
            if (day >= day_month[month])
                break;
            if (!key and Week[i] == first_day)
            {
                key = true;
            }
            if (key)
            {
                day_cnt[Week[i]]++;
                day++;
            }
        }
    }
    // cout << month << endl;
    // for (auto [MM, DD] : day_cnt)
    //     cout << "MM: " << MM << " Day: " << DD << endl;
    cout << day_cnt["FRI"] + day_cnt["SAT"] << endl;
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