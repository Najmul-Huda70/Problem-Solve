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
/*
To determine if a number t is a T-prime, we need to check if 
t has exactly three distinct positive divisors. A number 
t has exactly three distinct divisors if and only if 
t is the square of a prime number. This is because if t=p^2, where 
p is a prime number, then the divisors of t are 1, p, and p^2,
 which are exactly three distinct divisors.

Here's how you can solve the problem efficiently:

1) Compute all prime numbers up to a certain limit using the Sieve of Eratosthenes.
2) Generate T-primes by squaring each prime.
3) Check each number in the input array to see if it is in the set of T-primes.

Here's the complete C++ code for this approach:

*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e6 + 5;
bool is_prime[N];

void sieve() {

    //first dore nilam shobai prime but 1 prime na;
    is_prime[1]=false;
    for (int i = 2; i < N; i++) {
        is_prime[i] = true;
    }
    for (int i = 2; i < N; i++) {
        if (is_prime[i]) { // i is a prime
            for (int j = i+i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
    
    int n;
    cin >> n;
    while (n--) {
        ll x;
        cin >> x;

         //long long er shomoi sqrtl use korte hoi
int p=sqrtl(x);//sqrtl function double type value return kore 
//better way sqrt check
while(1LL*p*p<x) ++p;
while(1LL*p*p>x) --p;
if(1LL*p*p==x){
    
        if (is_prime[p]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    else cout<<"NO\n";
    }
    return 0;
}

