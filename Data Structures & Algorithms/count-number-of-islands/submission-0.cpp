class Solution {
public:
    int m;
    int n;
    void dfs(vector<vector<char>>&grid,int i,int j){
        grid[i][j] = '0';
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        for(int dir = 0;dir<4;dir++){
            int nx = i + dx[dir];
            int ny = j  + dy[dir];
            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1'){
                dfs(grid,nx,ny); 
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int island = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j]=='1'){
                    island++;
                    dfs(grid,i,j);
                }
            }
        }
        return island;
    }
};
