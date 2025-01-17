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
    int H, M;
    char ch;
    cin >> H >> ch >> M;
    int min;
    cin >> min;
    M += min;
    H += M / 60;

        H %= 24;

        M %= 60;

    // if (H < 10) cout << 0 << H;
    // else  cout << H;
       
    // cout << ":";

    // if (M < 10)   cout << 0 << M;
    // else    cout << M << endl;

    cout << setw(2) << setfill('0') << H << ":"
         << setw(2) << setfill('0') << M << endl;


    return 0;
}