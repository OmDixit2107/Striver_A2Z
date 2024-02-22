#include <bits/stdc++.h>
#include <cctype>
using namespace std;
set<string> s;
void subset(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin() + 0);
    subset(ip, op1);
    subset(ip, op2);
}
int main()
{
    string ip;
    cin >> ip;
    stack<int> st;

    string op = "";
    subset(ip, op);
}