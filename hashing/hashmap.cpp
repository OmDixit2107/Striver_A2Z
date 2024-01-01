#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;
    for (int i = 0; i < n; ++i)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "-->" << it.second << endl;
    }
    // cout << endl;
    int number;
    cin >> number;
    cout << "The number appeared times " << mpp[number];
}