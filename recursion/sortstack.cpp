#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &v, int temp)
{
    if (v.size() == 0 || v.top() <= temp)
    {
        v.push(temp);
        return; // Add this line to stop the recursion
    }

    int val = v.top();
    v.pop();
    insert(v, temp);
    v.push(val);
}

void recursiveSort(stack<int> &v)
{
    if (v.size() <= 1)
        return;

    int temp = v.top();
    v.pop();
    recursiveSort(v);
    insert(v, temp);
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
    recursiveSort(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
