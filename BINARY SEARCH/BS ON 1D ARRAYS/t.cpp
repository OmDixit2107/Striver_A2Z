#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vector<int> v(t);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        cin >> k;
        int temp = v[k];
        int ans;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] == temp)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
