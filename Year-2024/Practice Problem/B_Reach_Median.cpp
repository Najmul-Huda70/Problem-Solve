// s.i.snajmulhuda2002
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const int N = 1e6 + 9;
const ll mod = 1e5 + 7, inf = 1e9;
int ar[N]; // arr[] = 10^9
void merge(int l, int mid, int h)
{
    // arr partition left : low to mid arr[] = {1,5,8,15,24}
    // arr partition right: mid+1 to high arr[] = {3,10,16,20}

    int i = l;        // left arr iterate
    int j = mid + 1;  // right arr iterate
    int sortArray[N]; // sort array store
    int k = l;
    while (i <= mid && j <= h)
    {
        if (ar[i] < ar[j])
        {
            sortArray[k] = ar[i];
            i++;
            k++;
        }
        else
        {
            sortArray[k] = ar[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= h)
        {
            sortArray[k] = ar[j];
            j++;
            k++;
        }
    }
    if (j > h)
    {
        while (i <= mid)
        {
            sortArray[k] = ar[i];
            i++;
            k++;
        }
    }
    for (int st = l; st <= h; st++)
    {
        ar[st] = sortArray[st];
    }
}
void sort_array(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        sort_array(low, mid);
        sort_array(mid + 1, high);
        merge(low, mid, high);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s;
    cin >> n >> s;
    vi arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    // stable sort = merge sort algorithm
    stable_sort(arr.begin(), arr.end());
    int Median_pos = (n / 2) + n % 2;
    int Median_val = arr[Median_pos];
    ll cnt = 0;
    if (s >= Median_val)
    {
        for (int i = Median_pos; i <= n; i++)
        {
            if (s <= arr[i])
                break;
            cnt += s - arr[i];
        }
    }
    else
    {
        for (int i = Median_pos; i >= 1; i--)
        {
            if (s >= arr[i])
                break;
            cnt += (arr[i] - s);
        }
    }
     cout << cnt << endl;
    //    for(int i=1;i<=n;i++)
    //    {
    //      cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    return 0;
}