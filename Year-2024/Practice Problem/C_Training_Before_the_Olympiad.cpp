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
        vl arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = arr[0];
        cout<<sum<<" ";
        int odd = 0;
        if(arr[0]%2==1) odd++;
        for (int i = 1; i < n; i++)
        {
            sum+=arr[i];
            if(arr[i]%2==1) odd++;
            if(odd==3) 
            {
                sum-=1;
                odd=0;
            }
           
            cout<<(sum/2)*2<<" ";
            
        }

        cout<<endl;
    }
    return 0;
}