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
        int n, k;
        int q;
        cin >> n >> k >> q;
        vi arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ways = 0LL, cnt = 0;
        int i;
        int flag = -1;
        for (i = 0; i < n; i++)
        {
            if (arr[i] <= q)
            {
                cnt++;
            }
            else
            {
                flag = i;
               if(cnt>=k) 
               {
                int temp = cnt-k+1;
                 ways+=(1LL*temp*(temp+1))/2;
               }
                cnt = 0;
            }
        }
        if (flag == -1)
        {
            cnt = n;
            if(cnt>=k) 
               {
                int temp = cnt-k+1;
                ways+=(1LL*temp*(temp+1))/2;
               }
        }
        else
        {
            cnt = n - 1 - flag;
            if(cnt>=k) 
               {
                int temp = cnt-k+1;
                ways+=(1LL*temp*(temp+1))/2;
               }
        }
        cout << ways << endl;
    }
    return 0;
}