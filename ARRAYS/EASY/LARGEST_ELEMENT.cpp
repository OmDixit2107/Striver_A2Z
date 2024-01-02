#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n)
{
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}
