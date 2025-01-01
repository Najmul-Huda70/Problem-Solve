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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        ll sum = 0;
        vi freq(10);
        for (int i = 0; i < n; i++)
        {
            int digit = s[i] - '0';
            sum += digit;
            freq[digit]++;
        }
        // for(int i=0;i<10;i++)
        // {
        //     cout<<freq[i]<<" ";
        //  }
        //  cout<<endl;
        bool flag = false;
        if (sum % 9 == 0)
            flag = true;
        else
        {
            ll baki_ongsho = sum % 9;
            int dorkar = (9 - baki_ongsho) % 9;
            // cout<<"dorkar "<<dorkar<<endl;
            //  if(dorkar==2 && (freq[2]>=1 || freq[3]>=3))   flag = true;
            //  else if(dorkar==6 && (freq[3]>0 || freq[2]>=3))  flag = true;
            //  else if(dorkar == 1 && (freq[2]>=5 || (freq[3]>0 && freq[2]>=2)))  flag = true;
            //  else if(dorkar==3 && (freq[3]>=2 || freq[2]>=6 || (freq[3]>=1 && freq[2]>=3)))  flag = true;
            //  else if(dorkar == 4 && freq[2]>=2 ) flag = true;
            //  else if(dorkar == 5 && (freq[2]>=7 || (freq[3]>=2 && freq[2]>=1) || (freq[3]>=1 && freq[2]>=4))) flag = true;
            //  else if(dorkar == 7 && (freq[2]>=8 || (freq[3]>=2 && freq[2]>=2) || (freq[3]>=1 && freq[2]>=5))) flag = true;
            //  else if(dorkar == 8 && (freq[2]>=4 || (freq[3]>=1 && freq[2]>=1))) flag = true;
            for (int i = 0; i < 9; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int add = (2 * i + 6 * j) % 9;
                    if (dorkar == add && i <= freq[2] && j <= freq[3])
                    {
                        
                            flag = true;
                            break;
                        
                    }
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}