#include <bits/stdc++.h>
using namespace std;
int first_occurence(vector<int> a, int n, int x)
{
    int low = 0, high = n - 1, mid;
    int ans = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int last_occurence(vector<int> a, int n, int x)
{
    int low = 0, high = n - 1, mid;
    int ans = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (a[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = first_occurence(arr, n, k);
    if (first == -1)
        return {-1, -1};
    int last = last_occurence(arr, n, k);
    return {first, last};
}
