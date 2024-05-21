#include <bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int>&visited,vector<int> adjLS[]){
    int start=node;
    for(auto it:adjLS[start]){
        if(!visited[it]){
            visited[it]=1;
            dfs(it,visited,adjLS);
        }
    }
}

int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
    vector<int>adjLS[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1&&i!=j){
                adjLS[i].push_back(j);
                adjLS[j].push_back(i);
            }
        }
    }
    vector<int>visited(n,0);
    int ans=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans++;
            dfs(i,visited,adjLS);
        }
    }
    return ans;
}