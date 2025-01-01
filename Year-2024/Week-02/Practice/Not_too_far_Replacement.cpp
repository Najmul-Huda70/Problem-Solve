#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi = vector<int>;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        n++; 
        vi a(n);
        ll s = 0; 
        int mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
            s+=a[i];
            mx = max(mx,a[i]);
        }
     //cout<<mx<<endl;
        int sum_N=0;
        bool flag =false;
        for (int i = 0; i < n-1; i++) {
             if(a[n-1] == mx) 
             {
                sum_N = s-mx;
                flag =true;
                break;
             }
           
            if (a[i] <= 2 * a[n-1]) {
                swap(a[i], a[n-1]); 
           }

        }
        if(!flag)
        {  
            for(int i=0;i<n-1;i++)
            {
               sum_N +=a[i];              
             }
                 
        }
        cout << sum_N << endl; 
        
          }
    
    return 0;
}
