#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        for (int i = 0; i < n; ++i)
        {
            long long l = i, h = n - 1, j = -1;
            while (l <= h)
            {
                int m = (l + h) / 2;
                if (v[i] + v[m] <= x)
                {
                    j = m;
                    l = m + 1;
                }
                else
                {
                    h = m - 1;
                }
            }
            if (j != -1)
            {
                ans += j - i + 1;
            }
        }
        cout << ans << endl;
    }
}