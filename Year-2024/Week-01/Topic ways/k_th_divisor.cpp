/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
I said I am not happy in my life.....
Allah says: Soon your Lord will give you so much that you will be happy [Surah Duha 93:5]

I said I was disappointed all the time.....
Allah says And do not despair and do not grieve [Surah Imran 3:139]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 ****************************************************************************/
//contest link : https://codeforces.com/contest/762/problem/A
//vjudge: https://vjudge.net/problem/codeforces-762a
//find K th divisors
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int32_t main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
ll n,k;
//We read the integers 𝑛 and k.
cin>>n>>k;

vector<ll>divisors;
vector<ll>high_divisors;
//find divisors use sqrt(n) .for this loop time complexity =O(sqrt(n));
for (long long i = 1; i*i<=n; ++i) {
    //For each divisor i, n/i is also a divisor
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                high_divisors.push_back(n / i);
            }
        }
    }
 divisors.insert(divisors.end(),high_divisors.rbegin(),high_divisors.rend());
 /*
 begin()  type:  Regular iterator.
 rbegin() type: Reverse iterator.
*/
if(k>=divisors.size()) cout<<"-1"<<endl;
else cout<<divisors[k-1]<<" ";
 cout<<endl;
return 0;
}
// The overall time complexity of the code is O(sqrt(n)logn).