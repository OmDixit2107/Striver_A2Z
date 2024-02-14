#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxm = 0, cnt = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                cnt++;
                maxm = max(maxm, cnt);
            }
            else
            {

                cnt = 0;
            }
        }
        return maxm;
    }
};