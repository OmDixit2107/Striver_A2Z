#include <bits/stdc++.h>
using namespace std;

int f1 = -1, l1 = -1;

bool good(int n)
{
    bool isgood = false;

    for (int i = 31; i >= 0; i--)
    {
        if (((n >> i) & 1))
        {
            l1 = i;
            break;
        }
    }

    for (int i = 31; i >= 0; i--)
    {
        if (((n >> i) & 1))
        {
            f1 = i;
        }
    }
    int bits = __builtin_popcount(n);
    if ((abs(l1 - f1) + 1 == bits) || f1 == -1 || l1 == -1)
    {
        isgood = true;
    }

    return isgood;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long ans = 0;
        int n;
        cin >> n;
        bool check = good(n);
        if (check)
            cout << 0 << endl;
        else
        {
            for (int i = 0; i < 31; i++)
            {
                if ((1 << i) & n)
                {
                    n += (1 << i);
                    ans += (1 << i);
                    if (good(n))
                    {
                        break;
                    }
                }
                // cout << ans << endl;
            }
            // 1010100011010111
            cout << ans << endl;
        }
    }

    return 0;
}
