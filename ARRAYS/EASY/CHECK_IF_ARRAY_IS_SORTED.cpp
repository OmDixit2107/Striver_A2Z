#include <bits/stdc++.h>
using namespace std;
int isSorted(int n, vector<int> a)
{
    int t = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
            t = 0;
    }
    return t;
}
