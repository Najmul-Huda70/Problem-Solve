# problem 01: D.Divide and Equalize
https://codeforces.com/problemset/problem/1881/D
step:
## 1. Problem Metadata
Title: Make All Elements Equal

Source: Custom Problem

Difficulty: Medium

Tags: Prime Factorization, Number Theory

## 2. Problem Statement
Given an array of positive integers, determine if it's possible to make all elements equal by performing operations where you can transfer prime factors between elements.

Operations Allowed:

Choose two different elements.

Select a divisor of one element (not equal to the element itself).

Divide the first element by the divisor and multiply the second element by it.

Example:

Input: [30, 50, 27, 20]

Output: NO (Cannot make all elements equal due to operational constraints.)

## 3. Approach
Intuition: The product of all elements must allow equal distribution of prime factors.

Algorithm:

Factorize each element into its prime factors.

Sum the counts of each prime factor across all elements.

Check if each prime's total count is divisible by the number of elements (n).

If yes, it's theoretically possible; otherwise, it's impossible.

Complexity:

Time: O(n⋅max element)  O(n⋅ max element) for factorization.
Space: O(number of distinct primes)  O(number of distinct primes) to store counts.

## 4. Solution Code
cpp
// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
#define vec_min(v) min_element(all(v));
#define vec_max(v) max_element(all(v));
#define vec_minmax(v) minmax_element(all(v));
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
template <typename Najmul>
void print(const vector<Najmul> &ans)
{
    for (const auto val : ans)
        cout << val << " ";
    cout << endl;
}
/*
 auto p = vec_minmax(a);
        int mx_a = *p.second;
        int mn_a = *p.first;
*/
int spf[N];
void sieve()
{
    for (int i = 2; i < N; i++)
        spf[i] = i;

    for (int i = 2; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            spf[j] = min(spf[j], i);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    FOR(i, 0, n - 1)
    cin >> a[i];
    /*
    ** To determine whether it's possible to make all elements in the array the same using the given operations, we need to analyze the prime factorization of the product of all elements in the array. Here's a step-by-step explanation of the approach:

 Key Insight
 1. Prime Factorization: The operations allow us to redistribute prime factors among the elements. The key observation is that the total count of each prime factor in the entire array must be divisible by the number of elements
 n
 n. This ensures that we can evenly distribute all prime factors to make all elements equal.

 2. Check Divisibility: For each prime factor in the combined factorization of all array elements, the total exponent must be divisible by
 n
 n. If this condition holds for all prime factors, then it's possible to make all elements equal; otherwise, it's not.
    */
    // Prime Factorization
    map<int, int> mp;
    FOR(i, 0, n - 1)
    {
        while (a[i] > 1)
        {
            int cnt = 0;
            int x = spf[a[i]];
            while (a[i] % x == 0)
            {
                cnt++;
                a[i] /= x;
            }
            if (cnt != 0)
                mp[x] += cnt;
        }
    }
    // for (auto [prime, cnt] : mp)
    //     cout << prime << " --> " << cnt << endl;

    for (auto [prime, cnt] : mp)
    {
        if (cnt % n != 0)
        {
            no;
            return;
        }
    }
    yes;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
## 5. Test Cases
Input 1: [30, 50, 27, 20]

Output: NO

Input 2: [2, 4, 8, 16]

Output: YES (All can become 4)

Edge Case: [1, 1, 1, 1]

Output: YES (Already equal)

## 6. Notes
Limitations: The solution assumes divisibility of prime counts is sufficient, but operational constraints may prevent equality (as in the first test case).

Optimization: Precompute smallest prime factors (SPF) for efficient factorization.
