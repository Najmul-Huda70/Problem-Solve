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
const int N=5000010;
const ll mod = 1e5 + 7,inf = 1e9;
ll sp[N];
ll f[N];
void sieve() {
    for (int i = 2; i < N; ++i) {
        if (sp[i] == 0) {
            for (int j = 1; j * i < N; j++) {
                sp[i * j] = i;
            }
        }
    }
    for (ll i = 2; i < N; ++i) {
        f[i] = f[i / sp[i]] + 1;
    }
    for (ll i = 2; i < N; ++i) {
        f[i] += f[i - 1];
    }
}
int main() {
    int n, a, b;
    sieve();
    scanf ("%d",&n);
	while (n--)
	{
		scanf ("%d%d",&a,&b);
		printf ("%d\n",f[a] - f[b]);
	}
    return 0;
}