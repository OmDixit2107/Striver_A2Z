/* BETTER SOLN

class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int lastsmall=INT_MIN,currcnt=0,longest=1,n=arr.size();
        sort(arr.begin(),arr.end());
        if(n==0)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]-1==lastsmall)
            {
                currcnt++;
                lastsmall=arr[i];
                
            }
            else if(arr[i]!=lastsmall)
            {
                currcnt=1;
                lastsmall=arr[i];
            }
            longest=max(longest,currcnt);
            
        }
        return longest;
    }
};
*/
