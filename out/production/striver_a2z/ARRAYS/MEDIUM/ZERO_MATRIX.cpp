#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &arr, int n, int m)
{
    int row[n] = {0}, column[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 1 || column[j] == 1)
            {
                arr[i][j] = 0;
            }
        }
    }
    return arr;
}