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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 9;


/*

 Modular Multiplication Function

This function computes the product of a and b modulo mod.
 It uses __int128 to avoid overflow during the multiplication of large numbers.
  The expression __int128(a) * b ensures that the multiplication is performed with a 128-bit integer,
 which can handle very large numbers, and then takes the result modulo mod.
 
 */
ll mul(ll a, ll b, ll mod) {
    return __int128(a)*b % mod;
}

/*
Modular Exponentiation Function

=> This function computes a^b mod mod using the method of modular exponentiation. 
This method is efficient for large exponents.

=> It uses a technique called Exponentiation by Squaring:
..............................................................
*/
ll power(ll a, ll b, ll mod) {
    ll ans = 1;
    a %= mod;      //a %= mod; ensures that a is reduced modulo mod at the beginning.
    while (b > 0) {
        if (b & 1) {   //If b is odd (b & 1)
            ans = mul(ans, a, mod); // it multiplies ans by a modulo mod.
        }
        a = mul(a, a, mod); // Squares a and reduces it modulo mod.
        b >>= 1;    // b >>= 1; divides b by 2 (right shift operation).
    }
    return ans;
}

// Function to calculate modular inverse using Fermat's Little Theorem
ll inverse(ll a, ll mod) {
    return power(a, mod - 2, mod);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, mod;
    cin >> a >> b >> mod;

    if (mod <= 1) {
        return 1;
    }

    cout << power(a, b, mod) << endl;
    cout << mul(a, b, mod) << endl;
    cout << mul(a, inverse(b, mod), mod) << endl;

    return 0;
}
