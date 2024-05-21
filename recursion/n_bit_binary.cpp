#include <iostream>
#include <vector>
using namespace std;

void solve(int zero, int one, string op, vector<string> &v, int n)
{
    if (zero + one == n)
    {
        v.push_back(op);
        return;
    }
    if (one != 0)
    {
        string op1 = op;
        op1.push_back('1');
        solve(zero, one + 1, op1, v, n);
    }
    if (one > zero)
    {
        string op2 = op;
        op2.push_back('0');
        solve(zero + 1, one, op2, v, n);
    }
}

vector<string> generatenbit(int n)
{
    vector<string> v;
    int one = 0, zero = 0;
    string op = "1";
    solve(zero, one + 1, op, v, n);
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<string> result = generatenbit(n);
    for (auto i : result)
    {
        cout << i << endl;
    }

    return 0;
}
