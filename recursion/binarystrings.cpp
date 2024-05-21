#include <bits/stdc++.h>
using namespace std;
set<string> s;
std::vector<string> ans;
bool check(string s)
{
    int c = 0;
    for (int i = 0; i < s.size(); ++i)
    {

        if (s[i] == '1')
        {
            c++;
        }

        if (s[i] == '0')
        {
            c = 0;
        }
        if (c > 1)
        {
            return false;
        }
    }
    return true;
}
void binarystrings(int n, int c, string op)
{
    if (op.size() == n)
    {
        s.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('0');
    op2.push_back('1');
    // ip.erase(ip.begin() + 0);
    binarystrings(n, op1.size(), op1);
    // c=0;
    binarystrings(n, op2.size(), op2);
}
int main()
{
    int n;
    cin >> n;
    string op = "";
    binarystrings(n, 0, op);
    for (auto i : s)
    {
        if (check(i))
        {
            ans.push_back(i);
        }
    }
    for (auto z : ans)
    {
        cout << z << endl;
    }
}