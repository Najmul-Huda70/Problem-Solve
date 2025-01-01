// s.i.snajmulhuda2002
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
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin >> k;
    while (k--)
    {
        int n;
        string S, T;
        cin >> n >> S >> T;
        bool flag = false;
        if (S == T)
        {
            cout<<"YES"<<endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (S[i] == T[i])
                    continue;

                for (int j = i + 1; j < n; j++)
                {
                    if (S[i] == S[j] && T[i] == T[j])
                    {

                        if (S[i] == '0')
                            S[i] = '1', S[j] = '1';
                        else
                            S[i] = '0', S[j] = '0';
                        if (S == T)
                        {
                            flag = true;
                            break;
                        }
                    }
                    else if (S[i] != S[j] && T[i] != T[j])
                    {  
                        swap(S[i],S[j]);
                         //S[i] = '1';
                        if (S == T)
                        {
                            flag = true;
                            break;
                        }
                    }
                }
            }
        
            cout << (flag ? "YES" : "NO") << endl;
        }
    }
    return 0;
}