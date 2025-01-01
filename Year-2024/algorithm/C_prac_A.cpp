/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
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

    int k1, k2, k3;
    cin >> k1 >> k2 >> k3;

    vector<int> v;
    v.push_back(k1);
    v.push_back(k2);
    v.push_back(k3);
    sort(v.begin(), v.end());

     if (v[0] == v[1] && v[1] == v[2]) {
        cout << "YES" << endl;
        return 0;
    }

    if ((v[0] == v[1] && v[2] - v[1] <= 1) || (v[1] == v[2] && v[1] - v[0] <= 1)) {
        cout << "YES" << endl;
        return 0;
    }

     if (v[2] - v[0] <= 1) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    
return 0;
}