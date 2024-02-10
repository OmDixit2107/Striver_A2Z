#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        unordered_map<int, int> mpp;
        vector<int> res;
        int n = changed.size();
        if (n & 1)
            return res;
        sort(changed.begin(), changed.end());
        for (int i = 0; i < n; i++)
        {
            mpp[changed[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mpp[changed[i]] == 0)
                continue;
            mpp[changed[i]]--;
            if (mpp[changed[i] * 2] == 0)
            {
                vector<int> emp;
                return emp;
            }
            else
            {
                mpp[changed[i] * 2]--;
            }
            res.push_back(changed[i]);
        }
        return res;
    }
};