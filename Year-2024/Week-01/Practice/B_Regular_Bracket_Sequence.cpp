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
bool isRegular(ll cnt1,ll cnt2,ll cnt3 ,ll cnt4)
{
        if(cnt1==cnt4 && cnt3%2==0)  return true;
       else if(cnt1==0 && cnt3==0 && cnt4==0) return true;
       else return false; 
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  ll cnt1,cnt2,cnt3,cnt4;
        cin>>cnt1>>cnt2>>cnt3>>cnt4;

    cout << isRegular(cnt1,cnt2,cnt3,cnt4) << endl;
    return 0;
}