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
const int N=1005; 
using vi = vector<int>;
const ll mod = 1e5 + 7, inf = 1e9;
int cnt = 0;
bool vis[N][N]; 
int dx[4] = {+1, -1, +0, +0};
int dy[4] = {+0, +0, +1, -1};
int W, H;
char grid[N][N]; 
bool valid(int x, int y)
{
    if (x >= 0 && x < H && y >= 0 && y < W && grid[x][y] != '#' && !vis[x][y])
        return true;
    return false;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true; 
    cnt++; 
     for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];
        if (valid(ci, cj))
            dfs(ci, cj); 
        }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t,cs=0; cin >> t;
    
    while (t--)
    {
        cin >> W >> H; 
         int start_i, start_j;
        memset(vis, false, sizeof(vis)); 
       for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == '@') // Start point
                {
                    start_i = i;
                    start_j = j;
                }
            }
        }
        
        cnt = 0; 
       dfs(start_i, start_j);
        
        cout <<"Case "<<++cs<<": "<< cnt << endl;
    }
    
    return 0;
}
