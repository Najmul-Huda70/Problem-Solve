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
 int t;cin>>t;
 while(t--)
 {
   int n,k;
   cin>>n>>k;
   vl arr(n);
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
    }
	if (n == k) {
		vl subArray;
    for(int i=1;i<n;i+=2)
    {
        subArray.push_back(arr[i]);
     } 
     subArray.push_back(0);
     for(int i=0;i<subArray.size();i++)
     {
       if(subArray[i]!=i+1)
       {
        cout<<i+1<<endl;
        break;
       }
      }
	}
//split an array 
// int mx_length_subArray = n/k + n%k;
// int a,b;
// if mx mx_length_subArray >= 2
else 
{
 	bool flag = false;
    int ans = -1;
		for (int i = 1; i <n - k + 2; i++) {
			if (arr[i] != 1) {
                flag = true;
				ans = i;
				break;
			}
		}
		
		if (!flag) {
			int temp = 2;
			for (int i = n - k; i <n; i += 2) {
				if (arr[i] != temp) {
					break;
				}
				temp++;
			}
			cout << temp << endl;
		} else {
			cout << 1 << endl;
		}
	}
 
}
return 0;
}