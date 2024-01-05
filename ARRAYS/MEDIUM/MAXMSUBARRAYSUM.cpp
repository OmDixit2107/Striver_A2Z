#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(vector<int> nums, int n)
{
    long long sum = 0;
    long long maxs = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum > maxs)
            maxs = sum;
        if (sum < 0)
            sum = 0;
    }
    if (maxs >= 0)
        return maxs;
    else
        return 0;
}