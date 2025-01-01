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
const int N = 50;
char grid[N][N]; 
bool vis[N][N]; 
int n, m;

int dx[4] = {-1, 1, 0, 0};//row
int dy[4] = {0, 0, -1, 1};//col

bool is_valid(int x, int y, int px, int py, char ch) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == ch && !(x == px && y == py);
}

bool dfs(int si, int sj, int px, int py, char ch) {
    vis[si][sj] = true;
    
    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        
         if (is_valid(ci, cj, px, py, ch)) {
            if (vis[ci][cj]) {
                return true;
            }
            
            if (dfs(ci, cj, si, sj, ch)) {
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
   cin >> n >> m;
    
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            vis[i][j] = false;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!vis[i][j]) {
                if (dfs(i, j, -1, -1, grid[i][j])) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    
     cout << "No" << endl;
    return 0;
}
