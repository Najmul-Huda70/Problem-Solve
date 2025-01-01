#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if(a/2==b || b/2==a) cout<<0<<endl;
    if(a==b && a%2==0) cout<<a/2<<endl;
    if(a==b && a%2==1)  cout<<(a/2)+1<<endl;
    int x=2*a;
    int y=2*b;
    if(a<b)
    {
         cout<<x-b<<endl;
    }
    else
    {
        cout<<y-a<<endl;
    }
}
}
