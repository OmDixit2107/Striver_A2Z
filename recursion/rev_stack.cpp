#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &v, int ele)
{
    if (v.size() == 0)
    {
        v.push(ele);
        return;
    }
    int temp = v.top();
    v.pop();
    insert(v, ele);
    v.push(temp);
}
void reverse(stack<int> &st)
{
    if (st.size() == 1)
        return;
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st, temp);
    return;
}
int main()
{
    vector<int> v(5);

    // cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    stack<int> st;

    for (int i = 0; i < 5; ++i)
    {
        st.push(v[i]);
    }
    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    cout << endl;
    // cout << "REVERESED STACK IS " << endl;
    reverse(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    // stack st
    // 3
    // 4
    // 1
    // 2
    // 5

    return 0;
}
