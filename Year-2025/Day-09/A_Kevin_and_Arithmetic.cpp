//Najmul Huda
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e6+9;
const ll mod = 1e5 + 7,inf = 1e9;
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi arr(n);
        
        for (int i = 0; i <n; i++) {
            cin >> arr[i];
        }

        vi even, odd;
        for (int i = 0; i <n; i++) {
            if (arr[i] % 2 == 0) {
                even.push_back(arr[i]);
            } else {
                odd.push_back(arr[i]);
            }
        }

        stable_sort(even.rbegin(), even.rend());
        stable_sort(odd.rbegin(), odd.rend());

        vi evenOdd = even;
        evenOdd.insert(evenOdd.end(), odd.begin(), odd.end());

        int s = 0, op = 0;
        for (int i = 0; i < n; i++) {
            s += evenOdd[i];
            if (s % 2 == 0) {
                op++;
                s=1;
            }
        }

        cout << op<< endl;
    }
    return 0;
}