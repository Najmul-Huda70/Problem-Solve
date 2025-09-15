/*
Author: Najmul Huda
Created: 2025-09-05 19:07:49
*/
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define fr(i, a, b, increment) for (int i = a; i <= b; i += increment)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define all(arr) arr.begin(), arr.end()
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const int mod = 1e9 + 7;
const ll mx=1e18;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);

void solve()
{  
    vl Ugly_Numbers;
    for(ll p2=1;p2<=mx;p2*=2){
        
        for(ll p3=1; 1LL*p3*p2<=mx;p3*=3){
            
            for(ll p5=1;1LL*p2*p3*p5<=mx;p5*=5) {
                Ugly_Numbers.push_back(p2*p3*p5*1LL);
            }
        }
    }
    sort(all(Ugly_Numbers));
cout<<"The 1500'th ugly number is "<<Ugly_Numbers[1500-1]<<"."<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
        solve();
    
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}