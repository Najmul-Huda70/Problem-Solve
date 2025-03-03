//Najmul Huda
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

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
 
	    vector<pair<int,int>>v(n);

        
	    string ans1="";
	    set<int>st;
	    map<int,int>mp;

	    for(int i=0;i<n;i++)
	    {	       
         cin>>v[i].first>>v[i].second;
	    }
   for(int i=0;i<n;i++)
   {
       if(v[i].first==v[i].second)
	        {
	            st.insert(v[i].first);
	            mp[v[i].first]++;
	        }
    }
 
	   
 
	    vector<int>ans;
	    for(auto it=st.begin();it!=st.end();it++)
	    {
	        ans.push_back(*it);
	    }
 
	    for(int i=0;i<n;i++)
	    {
	        int l=v[i].first;
	        int r=v[i].second;
 
	        if(l==r)
	        {
	            if(mp[l]>1)
	            {
	                ans1.push_back('0');
	            }
	            else
	            {
	                ans1.push_back('1');
	            }
 
	            continue;
	        }
 
	        int lower=lower_bound(ans.begin(),ans.end(),l)-ans.begin();
	        int upper=lower_bound(ans.begin(),ans.end(),r+1)-ans.begin();
	        int len=(upper-1)-lower+1;
 
	        if(len==r-l+1)
	        {
	            ans1.push_back('0');
	        }
	        else
	        {
	            ans1.push_back('1');
 
	        }
	    }
 
	    cout<<ans1<<endl;
	}
 
	return 0;
 
}

