/*
Author: Najmul Huda
Problem solve : 2025-09-27 09:30:02
*/
#include <bits/stdc++.h>
using namespace std;

#define SET(arr, a) memset(arr, a, sizeof(arr))
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

void solve()
{   
    vector<vi>v;
    int n;
    cin>>n;
    if(n<=0) return;
    v.resize(n);
    //input
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[i].resize(k);
        for(int j=0;j<k;j++){
            cin>>v[i][j];
        }
    }
    // sort increase order by size an array
    sort(all(v),[](vi a,vi b){return a.size()<b.size();});//O(n log n)
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<v[i].size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    int m=v.back().size();//maximum size  an array
    vi ans(m,inf);//make an ans array with all empty(infinity) value.
    vector<int> edit;
    edit.push_back(0);
    for(auto &vi : v) {
			int k = vi.size();
			for(int e = 0; e < (int)edit.size(); e++) {
				int l = edit[e], r = ((e+1 < (int)edit.size()) ? edit[e+1] : k);
				int replace = false;
				for(int i = l; i < r; i++) {
					if(ans[i] < vi[i]) break;
					if(ans[i] > vi[i]) { replace = true; break; }
				}
				if(replace) {
					for(int i = l; i < k; i++) {
						ans[i] = vi[i];
					}
					while(edit.back() > l) edit.pop_back();
					edit.push_back(k);
					break;
				}
			}
		}
         for(auto v:ans)
        {
            cout<<v<<" ";
        }
        cout<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0); 
    int t;cin>>t;while(t--)    solve();
    return 0;
}