#include <bits/stdc++.h>
using namespace std;

/*BETTER APPROACH
int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long , int> presumMap;
    int n=a.size();
    int maxLen=0;
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==k) maxLen=i+1;
        long long rem = sum-k;
        if(presumMap.find(rem)!=presumMap.end())
        {
            maxLen=max(maxLen,i-presumMap[rem]);
        }
        if(presumMap.find(rem)==presumMap.end())
        {
            presumMap[sum]=i;
        }
    }
    return maxLen;
}
*/

// OPTIMAL APPROACH
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int left = 0, right = 0;
    int maxLen = 0;
    long long sum = a[0];
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
            maxLen = max(maxLen, right - left + 1);
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}