#include <bits/stdc++.h>
using namespace std;
set<string> s;
void binarystrings(string ip, string op)
{
    if (ip.length() == 0)
    {
        s.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    binarystrings(ip, op1);
    binarystrings(ip, op2);
}
int main()
{
    string ip;
    cin >> ip;
    stack<int> st;

    string op = "";
    binarystrings(ip, op);
    for (auto i : s)
    {
        cout << i << endl;
    }
}