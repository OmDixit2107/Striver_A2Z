#include <bits/stdc++.h>
using namespace std;
int cntcows(vector<int> &v, int dist, int k)
{
    int cntc = 1, last = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - last >= dist)
        {
            cntc++;
            last = v[i];
        }
    }
    return cntc >= k;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int low = 0, high = stalls[stalls.size() - 1] - stalls[0], ans;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (cntcows(stalls, mid, k))
        {
            low = mid + 1;
            ans = mid;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}