//s.i.snajmulhuda2002
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
const ll mod = 1e5 + 7,inf = 1e9;

struct Node {
    ll maxSum, prefixSum, suffixSum, totalSum;
};

const int N = 2e5 + 5;
int n, q;
vector<ll> a(N), b(N);
vector<Node> segTree(4 * N);

Node merge(const Node& left, const Node& right) {
    Node res;
    res.totalSum = left.totalSum + right.totalSum;
    res.prefixSum = max(left.prefixSum, left.totalSum + right.prefixSum);
    res.suffixSum = max(right.suffixSum, right.totalSum + left.suffixSum);
    res.maxSum = max({left.maxSum, right.maxSum, left.suffixSum + right.prefixSum});
    return res;
}

void build(int idx, int l, int r) {
    if (l == r) {
        ll cost = a[l] + 2 * b[l];
        segTree[idx] = {cost, cost, cost, cost};
        return;
    }
    int mid = (l + r) / 2;
    build(2 * idx + 1, l, mid);
    build(2 * idx + 2, mid + 1, r);
    segTree[idx] = merge(segTree[2 * idx + 1], segTree[2 * idx + 2]);
}

Node query(int idx, int l, int r, int ql, int qr) {
    if (l > qr || r < ql) return {-inf, -inf, -inf, 0}; // Negative infinity for uninitialized nodes.
    if (l >= ql && r <= qr) return segTree[idx];
    int mid = (l + r) / 2;
    return merge(query(2 * idx + 1, l, mid, ql, qr), query(2 * idx + 2, mid + 1, r, ql, qr));
}

void update(int idx, int l, int r, int pos, ll val, bool isA) {
    if (l == r) {
        if (isA) a[l] = val;
        else b[l] = val;
        ll cost = a[l] + 2 * b[l];
        segTree[idx] = {cost, cost, cost, cost};
        return;
    }
    int mid = (l + r) / 2;
    if (pos <= mid) update(2 * idx + 1, l, mid, pos, val, isA);
    else update(2 * idx + 2, mid + 1, r, pos, val, isA);
    segTree[idx] = merge(segTree[2 * idx + 1], segTree[2 * idx + 2]);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    
    build(0, 0, n - 1);
    
    cin >> q;
    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int p;
            ll x;
            cin >> p >> x;
            update(0, 0, n - 1, p - 1, x, true);
        } else if (type == 2) {
            int p;
            ll x;
            cin >> p >> x;
            update(0, 0, n - 1, p - 1, x, false);
        } else {
            int l, r;
            cin >> l >> r;
            --l, --r; // Adjust to 0-based indexing
            ll result = LLONG_MIN;
            for (int k = l; k < r; ++k) {
                Node left = query(0, 0, n - 1, l, k);
                Node right = query(0, 0, n - 1, k + 1, r);
                result = max(result, left.maxSum + right.maxSum);
            }
            cout << result << "\n";
        }
    }
    
    return 0;
}
