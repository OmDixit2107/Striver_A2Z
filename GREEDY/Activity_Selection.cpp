#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        vector<pair<int, int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({end[i], start[i]});
        }
        sort(v.begin(), v.end());
        int c=-1, count=0;;
        for(int i=0;i<n;i++)
        {
            if(v[i].second>c)
            {
                count++;
                c=v[i].first;
            }
        }
        return count;
    }
};