#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {    string line_break,s;
        getline(cin,line_break);
        cin>>s;
        // while(true)
        // {
        //     getline(cin,s);
            
        //     if(!s.empty()) break;

        // }
        
        int n = s.size();
       for(int i=1;i<=n;i++)
       {
          set<string>sub;
          unsigned int j=0;
          if(n%i == 0)
         { while(j<n)
          {
              string sb =s.substr(j,i);
              sub.insert(sb);
              j+=i;
          }}
           if (sub.size() == 1)
                {
                    cout << i << endl;
                    if (t)
                        cout << endl;
                    break;
                } 
        }
       
           

        
    }

    return 0;
}
