/****************************************************************************
 Don't feel alone. Allah is with you!

 I said I failed...
Allah says the believers are successful [Surat al-Mu'minun 23:1]
I said I have a lot of trouble in my life
Allah says, Verily with hardship there is ease [Surah Alam Nasra 94:6]

I said no one is helping me....
Allah says it is my duty to help the believers [Surah Rum 30:47]

I said no one with me.....
Allah says fear not, I am with the believers [Surat al-Ha 20:46]
I said my sins are many.....
Allah says I love those who repent [Surah Baqarah 2:222]

 I said I am always sick......
Allah says: "I have sent the Qur'an as a cure for disease [Surah Bani-Israel 17:82]
I said I don't like this world......
Allah says the Hereafter is better for you than this life [Surah Duha 94:4]

I said victory is far away....
Allah says My help is near [Surah Baqarah 2:214]
 ****************************************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1001; // Maximum grid size for rows and columns
int n, m; // Dimensions of the grid
bool vis[N][N]; // Visited array to mark visited cells
char graph[N][N]; // The grid (1-based indexing)
bool ans;
int ei,ej;
int dx[4] = {-1, 0, 1, 0}; // Row movement: up, right, down, left
int dy[4] = {0, 1, 0, -1}; // Column movement: up, right, down, left

// Function to check if the next move is valid
bool valid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m);
}

// Depth First Search function to traverse the grid
void dfs(int si, int sj) {
    vis[si][sj] = true; // Mark the current cell as visited

    for (int i = 0; i < 4; i++) {
        int ci = si + dx[i]; // Next row index
        int cj = sj + dy[i]; // Next column index
       if(vis[ei][ej]) ans=true;
        // Continue DFS if the next cell is valid, not visited, and is an open cell ('.')
        if (valid(ci, cj) && !vis[ci][cj] && graph[ci][cj] == '.') {
            dfs(ci, cj); // Recursively call DFS on the next cell
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Input grid dimensions
    cin >> n >> m;

    // Input the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
        }
    }
    ans=false;
    int si,sj;
    cin>>si>>sj;
    cin>>ei>>ej;
    dfs(si,sj);

   cout<<(ans ? "YES":"NO")<<endl;
   
    return 0;
}
