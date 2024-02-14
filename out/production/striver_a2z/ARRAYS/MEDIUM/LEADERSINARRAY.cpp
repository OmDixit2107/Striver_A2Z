#include <bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int> &a)
{
    vector<int> ans;
    int max = INT_MIN;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] > max)
        {
            max = a[i];
            ans.push_back(a[i]);
        }
    }
    return ans;
}