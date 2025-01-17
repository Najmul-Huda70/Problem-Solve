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

 

int cnt_Set_Bits(int num) {
    int cnt = 0;
    while (num > 0) {
        cnt += (num & 1);
        num >>= 1;
    }
    return cnt;
}

int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);

    int t; 
    cin >> t;

    while (t--) {
        int n; 
        cin >> n;

        vi P(n); 
        for (int i = 0; i < n; ++i) {
            cin >> P[i];
        }

      map<int, vi> groups;
        for (int i=0;i<P.size();i++) {
            int bits = cnt_Set_Bits(P[i]);
            groups[bits].push_back(i);
        }

    
        for ( auto [setbits,index] : groups) {
            vi temp;
            for(auto idx : index)
            {
                temp.push_back(P[idx]);
             }
             sort(temp.begin(),temp.end());
             for(int i=0;i<index.size();i++)
             {
                 P[index[i]] = temp[i];
              }
           
        }

       bool flag = true;
       for(int i=1;i<P.size();i++)
       {
        if(P[i]<P[i-1]) {
            flag = false;
            break;
        }
        }
         if (flag) {
            cout << "Yes"<<endl;
        } else {
            cout << "No"<<endl;
        }
    }

    return 0;
}
