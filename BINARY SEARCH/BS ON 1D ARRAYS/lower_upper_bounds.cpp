/*
LOWER BOUND

int lowerBound(vector<int> arr, int n, int x) {
    //arr[idx]>=x
    int low=0,high=n-1,ans=n,mid;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        // 1 3 5 45 89
        // x=2

    }
    return ans;
}


*/

/*
UPPER BOUND

int upperBound(vector<int> &arr, int x, int n){
    int low=0,high=n-1,ans=n,mid;
    while(low<=high)
    {

        mid=(low+high)/2;
        if(arr[mid]>x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        // 1 3 5 45 89
        // x=2

    }
    return ans;
}
*/