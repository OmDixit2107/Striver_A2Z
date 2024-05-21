// RECURSIVE SOLN 

int f(int ind,vector<int>&v){
        if(ind==0) return 0;
        int left=f(ind-1,v)+abs(v[ind]-v[ind-1]);
        int right=INT_MAX;
        if(ind>1) right=f(ind-2,v)+abs(v[ind]-v[ind-2]);
        return min(left,right);
    }
  
    int minimumEnergy(vector<int>& height, int n) {
        return f(n-1,height);
    }

// DP SOLUTION MEMOIZATION

int f(int ind,vector<int>&v,vector<int>&dp){
        if(ind==0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int left=f(ind-1,v,dp)+abs(v[ind]-v[ind-1]);
        int right=INT_MAX;
        if(ind>1) right=f(ind-2,v,dp)+abs(v[ind]-v[ind-2]);
        return dp[ind]=min(left,right);
    }
  
    int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n+1,-1);
        return f(n-1,height,dp);
    }

// DP SOLUTION TABULATION

int minimumEnergy(vector<int>& height, int n) {
        vector<int>dp(n,0);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int fs=dp[i-1]+abs(height[i]-height[i-1]);
            int ss=INT_MAX;
            if(i>1) ss=dp[i-2]+abs(height[i]-height[i-2]);
            dp[i]=min(fs,ss);
        }
        return dp[n-1];
    }

// SPACE OPTIMISED

    int minimumEnergy(vector<int>& height, int n) {
        // vector<int>dp(n,0);
        // dp[0]=0;
        int prev=0,prev2=0;
        for(int i=1;i<n;i++){
            int fs=prev+abs(height[i]-height[i-1]);
            int ss=INT_MAX;
            if(i>1) ss=prev2+abs(height[i]-height[i-2]);
            curri=min(fs,ss);
            prev2=prev;
            prev=curri;
        }
        return prev;
    }