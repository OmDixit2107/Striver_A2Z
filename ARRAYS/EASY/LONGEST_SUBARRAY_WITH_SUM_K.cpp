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

int main()
{
}