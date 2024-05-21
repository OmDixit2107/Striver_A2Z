#include <bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],vector<int>&visited,vector<int>&ls){
    visited[node]=1;
    ls.push_back(node);
    for(auto it:adj[node]){
        if(visited[it]!=1){
            dfs(it,adj,visited,ls);
        }
    }
}
// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsOfGraph(int n, vector<int> adj[]) {
    vector<int>visited(n,0);
    int start=0;
    vector<int>ls;
    dfs(start,adj,visited,ls);
    return ls;
}