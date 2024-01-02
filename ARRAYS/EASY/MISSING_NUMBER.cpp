#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int arr[nums.size() + 1], ans;

        // Initialize arr with values from 0 to n
        for (int i = 0; i <= nums.size(); i++)
        {
            arr[i] = i;
        }

        sort(nums.begin(), nums.end());
        nums.push_back(0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (arr[i] != nums[i])
            {
                ans = arr[i];
                break;
            }
        }

        return ans;
    }
};