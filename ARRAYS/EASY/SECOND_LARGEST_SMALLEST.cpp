#include <bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // sort(a.begin(),a.end());
    vector<int> ans;
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, a[i]);
        large = max(large, a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < second_small && a[i] != small)
            second_small = a[i];
        if (a[i] > second_large && a[i] != large)
            second_large = a[i];
    }
    ans.push_back(second_large);
    ans.push_back(second_small);

    return ans;
}
