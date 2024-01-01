#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
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
    insertion_sort(arr, x);
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}