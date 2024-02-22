#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " " << x << endl;
#else
#define debug(x)
#endif

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    if (!stderr)
    {
        cerr << "Error opening file!" << endl;
        return 1;
    }
#endif

    int a = 10, b = 11;
    a++;
    b += 2;
    debug(a);
    debug(b);

    return 0;
}
