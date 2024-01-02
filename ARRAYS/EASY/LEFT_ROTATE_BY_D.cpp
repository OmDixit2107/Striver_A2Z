#include <bits/stdc++.h>
using namespace std;
vector<int> rotateArray(vector<int> arr, int k)
{
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin(), arr.end());
    return arr;
}
