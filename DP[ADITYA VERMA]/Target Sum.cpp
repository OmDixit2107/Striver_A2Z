//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mod = (int)(1e9 + 7);
    int perfectSum(vector<int>num, int n, int sum)
    {

        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));

        dp[0][0] = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j <= sum; j++) {

                if (num[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else {
                    dp[i][j] = dp[i - 1][j]
                               + dp[i - 1][j - num[i - 1]];
                }
                dp[i][j] %= mod;
            }
        }

        return dp[n][sum] % mod;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        for(auto i : nums){
            sum+=i;
        }
        // if((s+d)&1) return 0;

        if(sum < target) return 0;
        if((sum+target)<0 || ((sum+target) % 2) != 0) return 0;
        return perfectSum(nums,nums.size(),(sum+target)/2);
        // return countPartitions(nums.size(),target,nums);
    }
};