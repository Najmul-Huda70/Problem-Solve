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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                    cout << -1 << " ";
                else
                    cout << 1 << " ";
            }
            cout << endl;
            
        }
        else
        {
            if (n == 3)
                cout << "NO" << endl;
            else
            {
                cout<<"YES"<<endl;
                int temp = n/2;
                for (int i = 1; i <= n; i++)
                {
                    if (i % 2 == 0)
                        cout <<temp << " ";
                    else
                        cout << -(temp-1) << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}