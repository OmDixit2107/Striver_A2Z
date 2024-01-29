#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int high = nums.size() - 1;
        int low = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
        }
        return -1;
    }
};

// recursive code
/*
int bs(vector<int>& nums,int low, int high, int target)
{
    if(low > high) return -1;
    int mid = (low +high)/2;
    if(target > nums[mid]) return bs( nums,  mid+1,  high, target);
    else if (target==nums[mid]) return mid;
    else return bs( nums,  low,  mid-1,  target);
}

int search(vector<int>& nums, int target) {

    return bs(nums, 0, nums.size() - 1, target);
}

*/