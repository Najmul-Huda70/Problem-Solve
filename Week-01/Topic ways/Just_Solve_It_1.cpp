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

const int N = 1e6 + 9;
int spf[N]; // Smallest prime factor array

void sieve() {
    // Initial the smallest prime factor for each number
    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) { // i is a prime
            for (int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
}

int lpf(int x) {
    return spf[x];
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    // Compute smallest prime factors for numbers up to N
    sieve();
    
    int n;
    cin >> n;
    
    while (n--) {
        int x;
        cin >> x;
        
        // Find least prime factor
        cout << lpf(x) << " ";
      
        int gpf = 0;
        int dpf = 0;
        int tpf = 0;
        int number_divisors = 1;
        long long sum_of_divisors = 1;
        
        int original_x = x;
        while (x > 1) {
            int p = spf[x];
            gpf = max(gpf, p);
            
            // Count distinct prime factors
            if (x % p == 0) {
                dpf++;
            }
            
            int power_e = 0;
            long long p_to_the_power_of_e = 1;
            while (x % p == 0) {
                power_e++;
                p_to_the_power_of_e *= p;
                x /= p;
            }
            
            // Calculate sum of divisors
            sum_of_divisors *= (p_to_the_power_of_e * p - 1) / (p - 1);
            
            // Calculate number of divisors
            number_divisors *= (power_e + 1);
            
            tpf += power_e; // Total prime factors including multiplicity
        }
        
        cout << gpf << " ";
        cout << dpf << " ";
        cout << tpf << " ";
        cout << number_divisors << " ";
        cout << sum_of_divisors << endl;
    }
    
    return 0;
}
