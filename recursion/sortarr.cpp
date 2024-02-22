#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return; // Add this line to stop the recursion
    }

    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

void recursiveSort(vector<int> &v)
{
    if (v.size() <= 1)
        return;

    int temp = v[v.size() - 1];
    v.pop_back();
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

    recursiveSort(v);

    // cout << "Sorted array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
