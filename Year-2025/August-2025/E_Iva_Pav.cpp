// Najmul Huda
#include <bits/stdc++.h>
using namespace std;
#define SET(arr, a) memset(arr, a, sizeof(arr))
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define ROF(i, a, b) for (int i = a; i >= b; --i)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define condition(flag) cout << (flag ? "YES" : "NO") << endl;
using ll = long long;
using vi = vector<int>;

const int N = 3e5 + 9;
int arr[N];                
int tree[4*N];

void built(int node, int b, int e){
    if(b == e){
        tree[node] = arr[b];
        return;
    }
    int mid = (b+e)/2;
    int l = 2*node;
    int r = 2*node + 1;
    built(l, b, mid);
    built(r, mid+1, e);
    tree[node] = tree[l] & tree[r];
}

int findQ(int node, int b, int e, int i, int j)
{
    if(j < b || i > e) return INT_MAX; 
    if(i <= b && j >= e) return tree[node];
    int mid = (b+e)/2;
    int l = 2*node;
    int r = 2*node + 1;
    return findQ(l, b, mid, i, j) & findQ(r, mid+1, e, i, j);
}

void solve()
{ 
    memset(tree, 1, sizeof(tree));
    int n; 
    cin >> n;
    FOR(i,1,n) cin >> arr[i];

    built(1,1,n);

    int q;
    cin >> q;
    while(q--)
    {
        int l, k;
        cin >> l >> k;

        int low = l, high = n, ans = -1;
        while(low <= high){
            int mid = (low + high) / 2;
            int value = findQ(1, 1, n, l, mid); 
            if(value >= k){
                ans = mid;
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }
        cout << ans << " ";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
