#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--)
   {
        int n,x;
        cin>>n>>x;
        int ans = 0;
        int j=x;
       for(int i=n;i>0 && j>0;i--,j--)
       {
          int power_2n = pow(2,i);
          //cout<<power_2n<<endl;
          ans+=power_2n;
        }
        //cout<<ans<<endl;
        n=n-x;
       // cout<<n<<endl;
        for(int i=n;i>0;i--)
       {
          int power_2n = pow(2,i);
          //cout<<power_2n<<endl;
          ans-=power_2n;
        }

        cout<<ans<<endl;
   }
    
}