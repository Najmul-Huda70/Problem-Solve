#include <bits/stdc++.h>
using namespace std;

const int N = 1005; 
vector<string> grid; 
vector<vector<bool>> vis;
int n, m; 
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}}; 

bool Valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !vis[x][y]);
}

int dfs(int x, int y) {
    vis[x][y] = true;
    int area = 1; 
      for (auto dir : d) {
        int nx = x + dir.first;
        int ny = y + dir.second;
        if (Valid(nx, ny)) {
            area += dfs(nx, ny); 
                 }
    }
    return area;
}

int main() {
   cin >> n >> m;

     grid.resize(n);
    vis.resize(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int minArea = INT_MAX; 
      bool flag = false;
   for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                int area = dfs(i, j);
                minArea = min(minArea, area);
                  flag = true; 
                  }
        }
    }

    if (flag) {
        cout << minArea << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
