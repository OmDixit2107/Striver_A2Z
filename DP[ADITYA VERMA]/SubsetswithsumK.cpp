//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int mod = (int)(1e9 + 7);
public:

    int perfectSum(int num[], int n, int sum)
    {

        vector<vector<int>>dp(n+1,vector<int>(sum+1));

        dp[0][0] = 1;

        for (int i = 1; i <= sum; i++) {
            dp[0][i] = 0;
        }

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

};

//{ Driver Code Starts.
int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];



        Solution ob;
        cout << ob.perfectSum(a, n, sum) << "\n";

    }
    return 0;
}

// } Driver Code Ends