#include <bits/stdc++.h>
using namespace std;
void bfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&grid,
         int n,int m){
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int nrow=row+i;
                int ncol=col+j;
                if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]
                   &&grid[nrow][ncol]=='1'){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}
// Function to find the number of islands.
int numIslands(vector<vector<char>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&grid[i][j]=='1'){
                cnt++;
                bfs(i,j,vis,grid,n,m);
            }
        }
    }
    return cnt;
}

//SC=O(N^2)
//TC=O(N^2)
