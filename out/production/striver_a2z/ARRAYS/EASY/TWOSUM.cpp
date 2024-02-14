#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        int n = nums.size();
        map<int, int> hashMap;
        for (int i = 0; i < n; i++)
        {
            if (hashMap.find(target - nums[i]) != hashMap.end())
            {
                return {hashMap[target - nums[i]], i};
            }
            hashMap[nums[i]] = i;
        }
        return {-1, -1};
    }
};

/* 2 POINTER APPROACH FOR THE YES AND NO RETURNING QUESTION
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int left=0,right=n-1;
    int sum=0;
    while(left<right)
    {
        sum=book[left]+book[right];
        if(sum==target) return "YES";
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

*/