/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>hashmap;
        for(int i=0;i<nums.size();i++)
        {
            hashmap[nums[i]]++;
        }
        for(auto it:hashmap)
        {
            if(it.second>nums.size()/2)
            {
                return it.first;
            }
        }
        return -1;
    }
};
*/