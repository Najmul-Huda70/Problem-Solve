#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6+9;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; 
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;

        vector<ll> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        ll cnt = 0;
           //two pointer
         for(int i = 0; i < n; i++)
        {
            int low = lower_bound(arr.begin() + i + 1, arr.end(), l - arr[i]) - arr.begin();
            int high = upper_bound(arr.begin() + i + 1, arr.end(), r - arr[i]) - arr.begin() - 1;

            if(high >= low) {
                cnt += (high - low + 1);
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
