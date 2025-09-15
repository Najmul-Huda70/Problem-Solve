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
const int mod = 1e9 + 7, inf = 1e9;

//create some function
template <typename Najmul>
void print(const vector<Najmul> &ans);

void solve(int t)
{  
    int P,L; cin >> P>>L; 
    cout<<"Case "<<t<<": ";
    //piaju's kaise
    ll ate=P-L;
    set<ll>Q;
    for(int i=1;i*i<=ate;i++){
        if(ate%i==0){
            if(L<i) Q.insert(i);
            if(ate/i != i and L<ate/i){
                Q.insert(ate/i);
            }
        }
    }
    if(Q.empty()) cout<<"impossible";
    for(auto val:Q){
        cout<<val<<" ";
    }
    cout<<endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
   fr(i,1,T,1)
    {
        solve(i);
    }
    return 0;
}
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}