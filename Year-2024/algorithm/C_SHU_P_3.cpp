#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+9;

vector<int> findDivisors(int N) {
    vector<int> div;
    
    // Find all divisors of N
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            div.push_back(i);      
            if (i != N / i) {
                div.push_back(N / i); 
            }
        }
    }
    
    return div;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    
    int arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    
    vector<int> ans = findDivisors(sum);
    sort(ans.begin(), ans.end());

    for (auto d : ans) {
        ll s = 0;
        bool valid = true;

       for (int i = 0; i < n; i++) {
            s += arr[i];
            if (s > d) {
                valid = false; break;
            }
            if (s == d) {
                s = 0;  
            }
        }

        if (valid &&  s == 0) {
            cout << d << " ";
        }
    }

    return 0;
}
