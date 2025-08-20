// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_mafreq [key](v) mafreq[key] _element(all(v));
#define vec_minmafreq [key](v) minmafreq[key] _element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
void solve()
{  
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt_1 =count(all(s),'(');
    int cnt_2 =count(all(s),')');
    if(n%2==1 or cnt_1!=cnt_2) {
        cout<<-1<<endl;
        return;
    }
    vi v(n,2);
    stack<int>st;
    bool done=true;
    FOR(i,0,n-1){
     if(s[i]=='(')
     {
        st.push(i);
     }
     else {
        if(st.empty())
        {
            done=false;
            continue;
        }
        v[i]=1;
        v[st.top()]=1;
        st.pop();
     }
    }

    if(!done){
        while(!st.empty()) st.pop();
        v.assign(n,2);
        FOR(i,0,n-1){
     if(s[i]==')')
     {
        st.push(i);
     }
     else {
        if(st.empty())
        {
            done=false;
            continue;
        }
        v[i]=1;
        v[st.top()]=1;
        st.pop();
     }
    }
    }
//output
int mx_value =*max_element(all(v));
cout<<mx_value<<endl;
print(v);
    }
    

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
     cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}