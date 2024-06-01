//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
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
    int countPartitions(int n, int d, vector<int>& arr) {
        int s=0;
        for(auto i : arr){
            s+=i;
        }
        if((s+d)&1) return 0;
        return perfectSum(arr,n,(s+d)/2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends