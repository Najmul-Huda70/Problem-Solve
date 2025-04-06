#include <bits/stdc++.h>
using namespace std;

struct range
{
    int L, R;
};

bool cmprange(const range &a, const range &b)
{
    if (a.L != b.L)
        return a.L < b.L;
    return a.R < b.R;
}

// Binary search: find the first index in sorted ranges where range.L > k.
int lower_bound_idx(vector<range> &arr, int k)
{
    int lo = 0, hi = arr.size();
    while (lo < hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid].L > k)
            hi = mid;
        else
            lo = mid + 1;
    }
    return lo;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> H(n);
        for (int i = 0; i < n; i++)
        {
            cin >> H[i];
        }

        vector<int> left(n), right(n);

        left[0] = 0;
        for (int i = 1; i < n; i++)
        {
            int d = H[i] - H[i - 1];
            if (i == 1)
            {
                left[i] = 0;
            }
            else
            {
                int prev_d = H[i - 1] - H[i - 2];
                if (prev_d == d)
                    left[i] = left[i - 1];
                else
                    left[i] = i - 1;
            }
        }

        right[n - 1] = n - 1;
        for (int i = n - 2; i >= 0; i--)
        {
            int d = H[i + 1] - H[i];
            if (i == n - 2)
            {
                right[i] = n - 1;
            }
            else
            {
                int next_d = H[i + 2] - H[i + 1];
                if (next_d == d)
                    right[i] = right[i + 1];
                else
                    right[i] = i + 1;
            }
        }

        vector<range> ranges(n);
        for (int i = 0; i < n; i++)
        {
            ranges[i] = {left[i], right[i]};
        }

        sort(ranges.begin(), ranges.end(), cmprange);

        long long nonInter = 0;
        for (int i = 0; i < n; i++)
        {
            int idx = lower_bound_idx(ranges, ranges[i].R);
            nonInter += (n - idx);
        }

        long long totalPairs = (long long)n * (n - 1) / 2;
        long long ans = totalPairs - nonInter;

        cout << ans << endl;
    }

    return 0;
}