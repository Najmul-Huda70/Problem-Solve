#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t; 
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
       int total_sum=0;
       
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
         total_sum+=arr[i];
        }
        int left_sum = 0;
        bool flag = false;
        
       for(int i = 0; i < n; i++) {
            int right_sum = total_sum - left_sum - arr[i];

            if(left_sum == right_sum) {
                flag = true;
                break;
            }

            left_sum += arr[i];
        }

       cout<<(flag ? "YES":"NO")<<endl;
    }

    return 0;
}
