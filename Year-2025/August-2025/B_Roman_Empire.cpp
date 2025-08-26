// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
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
   string s;
   cin>>s;
   int si =s.size();
    if(si==4){
        int s0=s[0]-'0';
        FOR(i,1,s0) cout<<"M";
        int s1=s[1]-'0';
         if(s1==4) cout<<"CD";
        else if(s1==9) cout<<"CM";
        else {
          if(s1>=5) {
              cout<<"D";
            s1-=5;
          }
            FOR(K,1,s1) cout<<"C";
        }
        int s2=s[2]-'0';
        if(s2==4) cout<<"XL";
        else if(s2==9) cout<<"XC";
        else {
           if(s2>=5){
             cout<<"L";
            s2-=5;
           }
            FOR(K,1,s2) cout<<"X";
        }
        int s3=s[3]-'0';
        if(s3==4) cout<<"IV";
        else if(s3==9) cout<<"IX";
        else{
            if(s3>=5){
                cout<<"V";
                s3-=5;
            }
            FOR(K,1,s3) cout<<"I";
        }
    }
     if(si==3){
        
        int s0=s[0]-'0';
         if(s0==4) cout<<"CD";
        else if(s0==9) cout<<"CM";
        else {
          if(s0>=5) {
              cout<<"D";
            s0-=5;
          }
            FOR(K,1,s0) cout<<"C";
        }
        int s1=s[1]-'0';
        if(s1==4) cout<<"XL";
        else if(s1==9) cout<<"XC";
        else {
           if(s1>=5){
             cout<<"L";
            s1-=5;
           }
            FOR(K,1,s1) cout<<"X";
        }
         int s2=s[2]-'0';
        if(s2==4) cout<<"IV";
        else if(s2==9) cout<<"IX";
        else{
            if(s2>=5){
                cout<<"V";
                s2-=5;
            }
            FOR(K,1,s2) cout<<"I";
        }

    }
    if(si==2){
        
       
        int s0=s[0]-'0';
        if(s0==4) cout<<"XL";
        else if(s0==9) cout<<"XC";
        else {
           if(s0>=5){
             cout<<"L";
            s0-=5;
           }
            FOR(K,1,s0) cout<<"X";
        }
         int s1=s[1]-'0';
        if(s1==4) cout<<"IV";
        else if(s1==9) cout<<"IX";
        else{
            if(s1>=5){
                cout<<"V";
                s1-=5;
            }
            FOR(K,1,s1) cout<<"I";
        }

    }
    if(si==1){
        
         int s0=s[0]-'0';
        if(s0==4) cout<<"IV";
        else if(s0==9) cout<<"IX";
        else{
            if(s0>=5){
                cout<<"V";
                s0-=5;
            }
            FOR(K,1,s0) cout<<"I";
        }

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
    while (T--)
    {
        solve();
    }
    return 0;
}