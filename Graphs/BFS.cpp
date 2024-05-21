#include <bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int n, vector<int> adj[]) {
    vector<int>visited(n,0);
    visited[0]=1;
    queue<int>q;
    vector<int>bfs;

    q.push(0);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it:adj[node]){
            if(visited[it]!=1){
                q.push(it);
                visited[it]=1;
            }
        }
    }
    return bfs;
}