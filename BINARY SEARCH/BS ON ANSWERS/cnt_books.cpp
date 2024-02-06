#include <bits/stdc++.h>
using namespace std;
int cnt_books(vector<int> &v, int pages)
{
    int stu = 1, last_pages = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (last_pages + v[i] <= pages)
        {
            last_pages += v[i];
        }
        else
        {
            stu++;
            last_pages = v[i];
        }
    }

    return stu;
}

int findPages(vector<int> &arr, int n, int m)
{
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    if (m > n)
        return -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (cnt_books(arr, mid) > m)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}