#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main()
{
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr, x);
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}