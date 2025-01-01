/*************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said none of my plans are succeeding.....
Allah says Allah is the best planner [Surah Imran 3:54]
 *************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N=1e3+9;
const ll mod = 1e5 + 7,inf = 1e9;

int weight[N], value[N], dp[N][N];

int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0) return 0;  // Base case
    if (dp[n][w] != -1) return dp[n][w];  // Return if already hishab kora takle

    if (weight[n-1] <= w)  // Accessing n-th item as weight[n-1] and value[n-1]
    {
        // Option 1: niye dekabo
        int op1 = knapsack(n - 1, weight, value, w - weight[n-1]) + value[n-1];

        // Option 2:naniye dekabo
        int op2 = knapsack(n - 1, weight, value, w);

        return dp[n][w] = max(op1, op2);  // Store and return the maximum of both
    }
    else
    {
        // If the current item cannot be taken, only consider not taking it
        int op2 = knapsack(n - 1, weight, value, w);
        return dp[n][w] = op2;  // Store and return the result
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, W;
    cin >> n >> W;

    // Input the weights and values
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }

    // Initialize dp array with -1 for memoization
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -1;
        }
    }

    // Call the knapsack function and print the result
    cout << knapsack(n, weight, value, W) << endl;

    return 0;
}
