#include <bits/stdc++.h>
using namespace std;
void bfs(int sr,int sc,vector<vector<int>>&vis,vector<vector<int>>image, int color){
    int n=image.size();
    int m=image[0].size();
    vis[sr][sc]=1;
    queue<pair<int,int>>q;
    q.push({sr,sc});
    while(!q.empty()){
        int start=q.front().first;
        int end=q.front().second;
        q.pop();
        for(int i=-1;i<=1;i++){
            int nstart=start+i;
            int nend=end;
            if (nstart >= 0 && nstart < n && nend >= 0 && nend < m &&
                !vis[nstart][nend] && image[nstart][nend] == color){
                vis[nstart][nend]=1;
                q.push({nstart,nend});
            }
        }
        for(int i=-1;i<=1;i++){
            int nstart=start;
            int nend=end+i;
            if (nstart >= 0 && nstart < n && nend >= 0 && nend < m &&
                !vis[nstart][nend] && image[nstart][nend] == color){
                vis[nstart][nend]=1;
                q.push({nstart,nend});
            }
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int n=image.size();
    int m=image[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    int initialColor=image[sr][sc];

    bfs(sr, sc, vis, image, initialColor);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j]) {
                image[i][j] = color;
            }
        }

    }
    return image;
}
