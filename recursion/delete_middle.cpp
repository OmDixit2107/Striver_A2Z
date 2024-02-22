#include <bits/stdc++.h>
using namespace std;
void remove(stack<int> &st, int k)
{
    if (k == 1)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    remove(st, k - 1);
    st.push(temp);
}

int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    stack<int> st;
    for (int i = 0; i < 5; i++)
    {
        st.push(arr[i]);
    }
    remove(st, 3);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}