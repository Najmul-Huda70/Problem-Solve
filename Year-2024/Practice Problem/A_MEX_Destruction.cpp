
// s.i.snajmulhuda2002
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
        int arr[n];
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                zero += 1;
            }
        }
        // cout<<zero<<endl;
        if (zero == n)
           { cout << 0 << endl; continue;}
                        
        int cnt = 0;
        bool flag = false;
        for(auto val : arr)
        {
          if(val != 0 && !flag)
          {
            cnt++;
            flag = true;
          }
          
          if(val==0) flag = false;
          
         }
        cout<<(cnt>=2 ? 2:1)<<endl;
    }
    return 0;
}