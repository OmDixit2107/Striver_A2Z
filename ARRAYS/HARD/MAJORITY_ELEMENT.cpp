#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int n = nums.size();
        int lastele = nums[0];
        int count = 1;

        if (n == 1 || n == 2)
        {
            result.push_back(nums[0]);
        }

        for (int i = 1; i < n; i++)
        {
            if (nums[i] == lastele)
            {
                count++;
            }
            else
            {
                count = 1;
                lastele = nums[i];
            }

            if (count > n / 3 && (result.empty() || nums[i] != result.back()))
            {
                result.push_back(nums[i]);
            }
        }

        return result;
    }
};
