#include <bits/stdc++.h>
using namespace std;
long long total_number_of_divisors(long long v)
{
    long long cnt = 2;
    for (int i = 2; i * i <= v; i++)
    {
        if (v % i == 0)
        {
            cnt++;
            if (v / i != i)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    int w, h, d;
    cin >> w >> h >> d;
    int n;
    cin >> n;
    long long original_volume = w * h * d;
    if (original_volume % n == 0)
    {
        long long make_volume = original_volume / n;
        long long cnt = total_number_of_divisors(make_volume);
        cout << cnt / 2 << " " << (cnt - 1) / 2 << " " << 1 << endl;
    }
    else
        cout << -1 << endl;
}