#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0, n = nums.size();
        for (int j = 0; j < n; j++)
        {
            if (nums[i] != nums[j])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return (i + 1);
    }
};